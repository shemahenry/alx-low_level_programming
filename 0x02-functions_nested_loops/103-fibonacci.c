#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float tot;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tot += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.of\n", tot);

	return (0);
}
