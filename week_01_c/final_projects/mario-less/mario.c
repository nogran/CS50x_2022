#include <cs50.h>
#include <stdio.h>

void	ft_print_space(int n)
{
	while (n > 0)
	{
		printf(" ");
		n--;
	}
}

int	main(void)
{
	int	n;
	int	j;
	int	count_n;

	j = -1;
	count_n = 1;
	while (!(n > 0 && n <= 8))
	{
		n = get_int("Height: ");
	}
	while (n > 0 && n <= 8)
	{
		ft_print_space(n - 1);
		while (j != 0)
		{
			printf("#");
			j++;
		}
		printf("\n");
		count_n++;
		j = count_n * -1;
		n--;
	}
}
