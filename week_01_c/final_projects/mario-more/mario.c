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

void	ft_print_left(int count)
{
	while (count != 0)
	{
		printf("#");
		count++;
	}
}
void	ft_print_right(int j)
{
	int	count_right;

	while (j > 0)
	{
		printf("#");
		j--;
	}
}

int main(void)
{
	int	n;
	int	count;
	int	j;

	count = -1;
	j = 1;
	while (!(n > 0 && n <= 8))
	{
		n = get_int("Weight: ");
	}
	while (n > 0 && n <= 8)
	{
		ft_space_left(n - 1);
		ft_print_left(count);
		printf("  ");
		ft_print_right(j);
		printf("\n");
		j++;
		count = j * -1;
		n--;
	}
}
