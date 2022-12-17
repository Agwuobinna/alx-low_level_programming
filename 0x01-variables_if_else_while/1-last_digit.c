#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a randon number to the variable n each time it is executed
 * Print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum");
	return (0);
}
