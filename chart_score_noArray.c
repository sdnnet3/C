
// This program will chart a score and print as hashes, one per point.
#include <cs50.h>
#include <stdio.h>

void chart(int score);

int main(void)
{
	int score1 = get_int("Enter Score 1");

	for (int i = 0 ; i < 1; i++)
	{
		chart(score1);
	}
}

void cart(int score);
{
	for (int i = 0; i < score; i++)
	{
		printf("#");
	}
	printf("\n");
}