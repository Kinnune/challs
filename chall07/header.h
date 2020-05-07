/* Author: Eljas Kinnunen 05/20 */

#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>

int     ft_count_width(char *str);
char	*ft_make_list(int widt, int heig, char **box);
char    **ft_allocate(int w, int h, char **argv);
void	ft_traverse_right(char **box, char *list);

struct numbers
{
	int x;
	int y;
	int amount;
	int list_i;
}nums;

#endif
