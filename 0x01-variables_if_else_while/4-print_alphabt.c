#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - A simple program generating
 * lowercase letters excluding q and e
 * Return:(0 On successful execution)
 */
int main(void)
{
	char lower_cases;

	for (lower_cases = 'a'; lower_cases <= 'z'; lower_cases++)
	{
		if (lower_cases == 'q' || lower_cases == 'e')
		{
			continue;
		}
		putchar(lower_cases);
	}
	putchar('\n');
}
