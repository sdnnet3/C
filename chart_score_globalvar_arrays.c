#include <cs50.h>
#include <stdio.h>

//This program uses global vars, arrays and 
//will chart test scores in a simple hash graph


//Cleaning a vacuum cleaner make you a vacuum cleaner.
int COUNT;

void chart(int score);

int main(void)
{
	//how many scores are you entering
	COUNT = get_int("How many test scores are being charted?");

	//get test scores
	int scores[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		printf("Scores are on a scale of 1 - 100\n");
		while (scores[i] < 0 || scores[i] > 100)
		{
			scores[i] = get_int("Enter Score %i: ", i + 1);
		}
	}

	//chart scores
	for (int i = 0; i < COUNT; i++)
	{
		// print on screen score number
		printf("Score %i: ", i + 1);
		chart(scores[i]);
	}
}

//chart
void chart(int score)
{
	for (int i = 0; i < score; i++)
	{
		printf("#");
	}
	printf("\n");
}