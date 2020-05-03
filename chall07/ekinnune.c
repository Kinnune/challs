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

char	**ft_allocate(int w, int h, char **argv)
{
	int i;
	int j;
	char **shape;

	i = 0;
	j = 0;
	shape = (char **)malloc(sizeof(char *)* h);
	while (i < h)
	{
		shape[i] = (char *)malloc(sizeof(char)* (w + 1));
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

//	ft_draw_hollow(int widt, int heig, char *list, char **box)

char	*ft_make_list(int widt, int heig, char **box)
{
	int i;
	int h;
	int w;
	int pattern_w;
	int pattern_h;

//	int temp_w;
//	int temp_h;
	char *list;

	w = 0;
	h = 0;
	i = 0;
	pattern_w = widt;
	pattern_h = heig;
//	temp_w = widt;
//	temp_h = heig;
	list = (char *)malloc(sizeof(char)* (heig * widt));

	while (pattern_w > 0 || pattern_h > 0)
	{
		if (w > 0)
			while (w < pattern_w)
			{
				list[i] = box[h][w];
				w++;
				i++;
			}
		
	pattern_w -= 2;
	pattern_h -= 2;
	}

	return (list);
}

int	main(int ac, char **av)
{
	int widt;
	int heig;
//	char *list;
	char **shape;
	heig = ac - 1;
	if (ac > 1)
	{
		widt = ft_count_width(av[1]);
		printf("length = %d height = %d", widt, heig);
		shape = ft_allocate(widt, heig, av);
		printf("%s %s", shape[0], shape[1]);

//		list = ft_make_list(widt, heig, shape);
//		printf("[%s]", list);
	}
	return (0);
}
