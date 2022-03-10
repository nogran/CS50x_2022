#include <stdio.h>
#include <cs50.h>

void	draw(int n)
{
	int	i;
	int	j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

int	main(void)
{
	int	height;

	height = get_int("Height: \n");
	draw(height);
}
