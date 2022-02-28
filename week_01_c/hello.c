#include <cs50.h>
#include <stdio.h>

int	main(void)
{
	string	answer;

	printf("Hello world.\n");
	answer = get_string("What's your name? ");
	printf("Hello, %s.\n", answer);
}
