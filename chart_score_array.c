#include <stdio.h>
#include <cs50.h>

// prints 3 charts from 3 scores

void chart(score);

int main(void)
{
	//Get score
	int score[3];

	for (int i = 0; i < 3; i++)
	{
		score[i] = get_int("Score %i: ", i + 1);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("Score %i:", i + 1 );
		chart(score[i]);
	}
}

void chart(int score)
{
	for (int i = 0; i < score; i++)
	{
		printf("#");
	}
	printf("\n");
}