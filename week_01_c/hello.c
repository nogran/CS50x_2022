#include <cs50.h>
#include <stdio.h>

int	main(void)
{
	string	answer; //string data type from cs50
	printf("Hello world.\n");
	answer = get_string("What's your name? ");
	printf("Hello, %s.\n", answer);
}
