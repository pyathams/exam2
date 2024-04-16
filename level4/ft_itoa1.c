#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
	if(nbr == -2147483648)
	{
		char *string = (char *)malloc(sizeof(char) * (12));
		string = "-2147483648\0";
		return (string);

	}
	int n = nbr;
	int len = 0;
	if (nbr <= 0)
	{
		len++;
    	}
	while (n) 
	{
		n /= 10;
		len++;
	}
	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL) 
		return NULL;
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return(result);
	}
	if (nbr < 0) 
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr) 
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return result;
}

int	main(void)
{
	char *str=ft_itoa(-2147483648);
	printf("%s a\n",str);
	free (str);
}