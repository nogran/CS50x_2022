#include <stdio.h>
#include <cs50.h>

int	main(void)
{
	int	x;
	int	y;

	x = get_int("x: ");
	y = get_int("y: ");
	printf("x * y = %i\n", x * y);
}
