/* Author: Eljas Kinnunen, 04/20 */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	**ft_allocate(int w, int h)
{
	char **shape;

	shape = (char **)malloc(sizeof(char *) * h);
	while (h >= 0)
	{
		shape[h] = (char *)malloc(sizeof(char)* w);
		h--;
	}
	return (shape);
/*	int j;
	int k;
	j = 0;
	k = 0;

	while (i <= (w * h))
	{
		if (av[j][k] == '\0')
		{
			j++;
			k = 0;
		}
		shape[i] = &av[j][k];
		k++;
		i++;
	}
*/
}

char	*ft_make_list(int widt, int heig, char **box)
{
	int size;
	int i;
	int h;
	int w;
//	int temp_w;
//	int temp_h;
	char *list;

	w = 0;
	h = 0;
	i = 0;
//	temp_w = widt;
//	temp_h = heig;
	size = heig * widt;
	list = (char *)malloc(sizeof(char)* size);
	while (i <= size)
	{
		while (box[h][w] != '\0')
		{
			list[i] = box[h][w];
			w++;
			i++;
		}
		h++;
		i++;
	}

	return (list);
}

int	main(int ac, char *av[])
{
	int widt;
	int heig;
	char *list;
	char **shape;
	heig = ac - 1;
	if (ac > 1)
	{
		widt = ft_count_width(av[1]);
		printf("length = %d height = %d", widt, heig);
		shape = ft_allocate(widt, heig);
		printf("%s %s", shape[0], shape[1]);

		list = ft_make_list(widt, heig, av);
		printf("[%s]", list);
	}
	return (0);
}
