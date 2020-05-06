/* Author: Eljas Kinnunen 05/20 */

int ft_ie_except_after_c(char *word)
{
	int i;

	i = 0;
	while (word[i] != '\0')
	{
		if (word[i] == 'e' && word[i + 1] == 'i')
		{
			if (word[i - 1] != 'c')
				return (0);
		}	
		if (word[i] == 'i' && word[i + 1] == 'e')
		{
			if (word[i - 1] == 'c')
				return (0);
		}	
		i++;
	}
	return (1);
}
