#include <cs50.h>
#include <stdio.h>

void	ft_space_left(int n)
{
	while (n > 0)
	{
		printf(" ");
		n--;
	}
}

void	ft_print_hash(int count)
{
	while (count != 0)
	{
		printf("#");
		count++;
	}
}

int	main(void)
{
	int	n;
	int	count;
	int	j;

	count = -1;
	j = 1;
	while (!(n > 0 && n <= 8))
	{
		n = get_int("Height: ");
	}
	while (n > 0 && n <= 8)
	{
		ft_space_left(n - 1);
		ft_print_hash(count);
		printf("  ");
		ft_print_hash(count);
		printf("\n");
		j++;
		count = j * -1;
		n--;
	}
}
