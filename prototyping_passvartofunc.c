#include <stdio.h>
#include <cs50.h>

//prototype cough
void cough(int n);


//passes int through function call
int main(void)
{
	cough(3);
}

//Cough
void cough(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("cough\n");
	}
}