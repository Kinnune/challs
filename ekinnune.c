/* Author: Eljas Kinnunen, 04/20 */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char **ft_allocate(int l, int h)
{
	char **shape;
	shape = malloc(sizeof(char *)* h);
	while (h >= 0)
	{
		shape[h] = malloc(sizeof(char)* l);
		h--;
	}
	return (shape);
}

int main(int ac, char *av[])
{
	int len;
	int heig;
	char **shape;
	heig = ac - 1;
	if (ac > 1)
	{
		len = ft_count_len(av[1]);
		printf("length = %d height = %d", len, heig);
		shape = ft_allocate(len, heig);
		printf("%s %S", shape[0], shape[1]);
	}
	return (0);
}
