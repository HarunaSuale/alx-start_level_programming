#include <stdio.h>

/**
 * main- entry point of the function.
 * Description: mathematical calculations.
 * Return: always return 0 after execution.
 */

int main(void)
{
	int a = 21;
	int b = 22;
	int c = a++;
	int d = (b--) * 3;

	printf("The value of c is:%d and that of d is:%d\n", c, d);
	return (0);
}
