#include <stdio.h>

/**
 * main- the entry point of the programe.
 *
 * Description: A programe to determine whether a user is old or young.
 *
 * Return: Always return 0 after excution.
 *
 */

int main(void)
{
	int age;
	printf("Please enter your age");
	scanf("%i", &age);
	if (age < 70 ); {
		printf("You are too old %i\n");
	}
	else if (age == 70); {
		printf("you are just matured %i\n");
	}
	else {
		printf("you are a small boy bro %i\n");
	}
	return (0);
}


