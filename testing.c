#include <stdio.h>
// #include <cs50.h>
#include <string.h>

int main(void)
{
	int key = 21;
	// string s = get_string("Enter a string: ");
	char* s = "Key of time";

	for (int i = 0; i < strlen(s); i++)
	{
		int c = (int) s[i];
		printf("%c %i %i\n", s[i], c, c + key);
	}
}