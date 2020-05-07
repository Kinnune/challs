/* Author: Eljas Kinnunen 05/20 */

#include "header.h"

int	main(int ac, char **av)
{
	struct numbers nums;
	int widt;
	int heig;
	char **shape;
	char *list;

	heig = ac - 1;
	if (ac > 1)
	{
		widt = ft_count_width(av[1]);
		printf("length = %d height = %d ", widt, heig);
		shape = ft_allocate(widt, heig, av);
		printf("%s %s", shape[0], shape[1]);
		list = ft_make_list(widt, heig, shape);
		printf("[%s]", list);
		printf("%d", nums.list_i);
	}
	return (0);
}
