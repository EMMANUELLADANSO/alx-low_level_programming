#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i, j, k, m;
	for(i = 48; i <=57; i++)
	{
		for(j = 48; j <=57; j++)
		{
			putchar(i);
			putchar (j);
			if(i == 48 && j == 48)
			{
				putchar (' ');
				for(k = 48; k <= 57; k++)
				{
					for(m = 49; m <= 57; m++)
					{
						putchar (k);
						putchar (m);
						if(m == k && k != j)
						{
						putchar (',');
						}
					if((i == 57 && j == 56) || (k == 57 && m == 57))
							{
						putchar (' ');
						}
						}
						}
						}
						}
						}
	putchar ('\n');	
	return (0);
}
