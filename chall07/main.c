/* Author: Eljas Kinnunen 05/20 */

#include "header.h"

int	main(int ac, char **av)
{
	int i;
	int width;
	int height;
	char **shape;
	char *list;

	i = 1;
	height = ac - 1;
	if (ac > 1)
	{
		width = ft_count_width(av[i]);
		while (av[i])
		{
			nums.amount_w = ft_count_width(av[i]);
			if (nums.amount_w != width)
				return (1);
			i++;
		}
//		printf("length = %d height = %d ", widt, heig);
		shape = ft_allocate(width, height, av);
		if (shape == 0)
			return (1);
		
//		printf("%s %s", shape[0], shape[1]);
		list = ft_make_list(width, height, shape);
		printf("[%s]", list);
	}
	return (0);
}
