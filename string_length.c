#include <stdio.h>
#include <cs50.h>

//String length
int main(void)
{
	string phrase = get_string("Enter a string: ");

	int n = 0;
	while (phrase[n] != '\0')
	{
		n++;
	}
	printf("%i\n", n);
}