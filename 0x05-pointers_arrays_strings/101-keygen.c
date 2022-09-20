#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define stopLimit 2645
#define asciiStop 127
#define asciiStart 32


/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */

int main(void)
{
	char password[100];
	int randValue, num = 0, i = 0;

	srand(time(NULL));

	while (num < stopLimit)
	{
		randValue = random() % asciiStop;

		if (randValue > asciiStart)
		{
			password[i++] = randValue;
			num += randValue;
		}
	}
	password[i++] = (2772 - num);
	password[i] = '\0';
	printf("%s", password);
	return (0);
}
