#include <stdio.h>

int ft_putstr(char *string)
{	
	int len = 0;
	while(*string != '\0')
	{
		len++;
		string++;
	}
	return len;
}

int	main(void)
{
	char *string = "Hola mundo";
	printf("%i", ft_putstr(string));
	return (0);
}
