#include <stdio.h>

void	meow(int n)
{
	int	i;

	for (i = 0; i < n; i++)
		printf("meow\n");
}

int	main(void)
{
	meow(3);
}
