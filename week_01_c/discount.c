#include <stdio.h>
#include <cs50.h>

float	discount(float price, int percentage)
{
	return (price * (100 - percentage) / 100);
}

int	main(void)
{
	float	sale;
	float	regular;	
	int		percent_off;

	regular = get_float("Regular price: ");
	percent_off = get_int("Percent off: ");
	sale = discount(regular, percent_off);
	printf("Sale price: %.2f\n", sale);
}
