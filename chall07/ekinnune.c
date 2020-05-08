/* Author: Eljas Kinnunen 04/20 */

#include "header.h"

int	ft_count_width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	**ft_allocate(int w, int h, char **argv)
{
	int i;
	int j;
	char **shape;

	i = 0;
	j = 0;
	shape = (char **)malloc(sizeof(char *)* h);
	if (!shape)
		return (shape);
	while (i < h)
	{
		shape[i] = (char *)malloc(sizeof(char)* (w + 1));
		if (!shape[i])
			return (shape);
		i++;
	}
	i = 0;
	while (j < h)
	{
		shape[j][i] = argv[j + 1][i];
		i++;
		if(argv[j + 1][i] == '\0')
		{
			shape[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	return (shape);
}

void	ft_traverse_right(char **box, char *list)
{
	int i;

	i = 0;
	while (i < nums.amount_w)
	{
		list[nums.list_i++] = box[nums.y][++nums.x];
		i++;
	}
}

void	ft_traverse_down(char **box, char *list)
{
	int i;

	i = 0;
	while (i < nums.amount_h)
	{
		list[nums.list_i++] = box[++nums.y][nums.x];
		i++;		
	}
}


void	ft_traverse_left(char **box, char *list)
{
	int i;

	i = 0;
	while (i < nums.amount_w)
	{
		list[nums.list_i++] = box[nums.y][--nums.x];
		i++;
	}
}	

void	ft_traverse_up(char **box, char *list)
{
	int i;

	i = 0;
	while (i < nums.amount_h)
	{
		list[nums.list_i++] = box[--nums.y][nums.x];
		i++;
	}
}
	
char	*ft_make_list(int widt, int heig, char **box)
{
	int list_size;
	char *list;
	nums.list_i = 0;
	nums.x = -1;
	nums.y = 0;
	nums.amount_w = widt;
	nums.amount_h = heig;
	list_size = widt * heig;
	list = (char *)malloc(sizeof(char)* list_size);

	while (nums.amount_w > 0 || nums.amount_h > 0)
	{
		nums.amount_h--;
		ft_traverse_right(box, list);
		nums.amount_w--;
		ft_traverse_down(box, list);
		nums.amount_h--;
		ft_traverse_left(box, list);
		nums.amount_w--;
		ft_traverse_up(box, list);
	}
	return (list);
}
