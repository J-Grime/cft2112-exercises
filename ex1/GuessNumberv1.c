#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_RANGE 20

int main(int argc, const char** argv)
{
	srand(time(NULL));

	int guessnumber;
	int hiddennumber = rand()%MAX_RANGE + 1;
	bool guess = false;

	fprintf(stdout, "Enter a number between 1 to %d: ", MAX_RANGE);
	fscanf(stdin, "%d", &guessnumber);
while (guess == false)
	if (guessnumber ==  hiddennumber)
		{
		fprintf(stdout, "You are correct.\n");
		guess = true;
		}
	else if (guessnumber<hiddennumber)
		{
		fprintf(stdout, "The hidden number is greater than your guess\n");
		fprintf(stdout, "Enter a number between 1 to %d: ", MAX_RANGE);
		fscanf(stdin, "%d", &guessnumber);
		}
	else if (guessnumber>hiddennumber)
		{
		fprintf(stdout, "The hidden number is less than your guess");
		fprintf(stdout, "Enter a number between 1 to %d: ", MAX_RANGE);
		fscanf(stdin, "%d", &guessnumber);
		}
}
