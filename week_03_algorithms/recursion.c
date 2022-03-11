#include <stdio.h>
#include <cs50.h>

void	draw(int n)
{
	int	i;

	if (n <= 0)
		return ;
	draw(n - 1);
	for (i = 0; i < n; i++)
	{
		printf("#");
	}
	printf("\n");
}

int	main(void)
{
	int	height;

	height = get_int("Height: ");
	draw(height);
}
