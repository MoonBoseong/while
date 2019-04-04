#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	
	while (a < 5)
	{
		b = 0;
		while (a > b)
		{
			printf("o");
			b++;
		}
		printf("*\n");
		a++;
	}
	return 0;
}