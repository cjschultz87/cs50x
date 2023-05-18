//#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>


//////////////////////
void prompt(char *str)
{	
	char a;
	
	for (int i = 0; i >= 0; i++)
	{
		a = str[i];
		
		if (a == NULL)
		{
			goto point_alpha;
		}
		
		putc(a,stdout);
	}
	
	point_alpha:{};
}


///////////
int input()
{
	char *c = calloc(16,sizeof(char));
	int c_prime = 0;
	
	
	gets(c);
		
	int c_n = 0;
		
	while (c[c_n] != NULL)
	{
		c_n++;
	}
		
	for (int i = 0; i < c_n; i++)
	{
		int power = 1;
			
		for (int i_1 = 0; i_1 < c_n - (1+i); i_1++)
		{
			power *= 10;
		}
			
		c_prime += (c[i] - 48) * power;
	}
	
	return c_prime;
}

/////////////////////
void years(int alpha)
{
	while (alpha != 0)
	{
		putc(alpha%10 + 48,stdout);
		
		alpha /= 10;
	}
}


//////////////
int main(void)
{
    // TODO: Prompt for start size

	char *sierra_0 = "Enter initial population (start size): ";
	
	int a = 0;
	
	do{
	
		prompt(sierra_0);
	
		a = input();
	}while (a < 9);

    // TODO: Prompt for end size
	
	char *sierra_1 = "Enter final population (end size): ";
	
	int b = 0;
	
	do{
		prompt(sierra_1);
		
		b = input();
	}while (b < a);

    // TODO: Calculate number of years until we reach threshold
	
	int a_prime = a;
	
	int alpha = 0;
	
	do{
		alpha++;
		
		a_prime = a_prime + (a_prime / 3) - (a_prime / 4);
		
	}while (a_prime < b);

    // TODO: Print number of years
	
	prompt("Years: ");
	years(alpha);
	
	putc('\n',stdout);
}
