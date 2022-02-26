#include <stdio.h>
#include <cs50.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;

	do
		i = get_int("Width: ");
	while (i < 1);

	for (n = 0; n < i; n++)
	{
		for (j = 0; j < i; j++)
			printf("#");
		printf("\n");
	}
}
