#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
	{
		putchar(i);
	}
        for (i = 65; i < 65 + 26; i++)
        {
                putchar(i);
        }
	putchar('\n');
	return (0);
}

