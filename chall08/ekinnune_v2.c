/* Author: Eljas Kinnunen 05/20 */

int ft_ie_except_after_c(char *word)
{
	while (*word)
	{
		if (*word == 'e')
		{
			word--;
			if (*word == 'i')
			{
				word--;
				if (*word == 'c')
					return (0);
				word++;
			}
			word += 2;
			if (*word == 'i')
			{
				word -= 2;
				if (*word != 'c')
					return (0);
				word++;
			}
			else
				word--;
		}	
		word++;
	}
	return (1);
}
