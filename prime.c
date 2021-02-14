#include <stdio.h>

int main(void)
{
	int limit = 100000000;

	for(int i = 2; i <= limit; i++)
	{
		int div_count = 0;
		if(i % 2 != 0)
		{
			for(int j = 1; j <= i/j; j+=2)
			{
				if(i % j == 0) div_count++;
			}
		}
		if(div_count == 1) 
		{
			printf("%d\n", i);
		}
	}
}
