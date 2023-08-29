#include <stdio.h>
/**
 * main - Printing the sum of multiples
 * of 3 and 5 in a range 1024 below
 * Return: Sum of multiples of 3 and 5
 */
int main(void)
{
	int i, s1, s2, s3;

	s1 = 0;
	s2 = 0;
	s3 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			s1 += i;
		}
		else if ((i % 5) == 0)
		{
			s2 += i;
		}
	}
	s3 = s1 + s2;
	printf("%d\n", s3);
	return (0);
}
