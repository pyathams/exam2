
#include <stdlib.h>
#include <stdio.h>

// unsigned int	lcm(unsigned int a, unsigned int b)
// {
// 	if (a == 0 || b == 0)
// 		return (0);
// 	int c;

// 	if (a < b)
// 		c = b;
// 	else 
// 		c = a;
// 	while (1)
// 	{
// 		if (c % a == 0 && c % b == 0)
// 			return (c);
// 		c++;
// 	}
// }

unsigned int hcf(unsigned int a, unsigned b)
{
	int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

unsigned int lcm(unsigned int a, unsigned b)
{
	if (a == 0 || b == 0)
		return (0);
	return (a* b / hcf(a , b));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int i;
		i = lcm(atoi(argv[1]), atoi(argv[2]));
		printf("%u \n", i);
	}
}
