#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	
	while (a < 5)
	{
		printf("*\n");
		a++;

		while (b < 4)
		{
			printf("o");
			b++;
		}
	}
	return 0;
}