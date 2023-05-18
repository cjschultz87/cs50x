//#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

/////////////////////
void print(char *str)
{	
	char a;
	
	for (int i = 0; str[i] != NULL; i++)
	{
		a = str[i];
		
		putc(a,stdout);
	}
}

///////////////////
int stin(char *str)
{
	int a = 0;
	int n = 0;
	
	for (int i = 0; str[i] != NULL; i++)
	{
		n++;
	}
	
	for (int i = 0; i < n; i++)
	{
		int power = 1;
		
		for (int i_1 = 0; i_1 < n-(1+i); i_1++)
		{
			power *= 10;
		}
		
		a += (str[i] - 48) * power;
	}
	
	return a;
}

////////////////////
void putSpace(int s, int i)
{
	for (int a = 0; a < s - i; a++)
	{
		putc(' ',stdout);
	}
}

////////////////////
void putBlock(int s, int i)
{
	for (int a = 0; a < i; a++)
	{
		putc('#',stdout);
	}
}


//////////////
int main(void) 
{
	int s = 0;
	
	do{
		print("Height: ");
	
		char *sierra_0 = malloc(sizeof(gets(sierra_0)));
	
		gets(sierra_0);
	
		s = stin(sierra_0);
	}while (s < 1 | s > 8);
	
	for (int i = 1; i <= s; i++)
	{
		putSpace(s,i);
		
		putBlock(s,i);
		
		putc(' ',stdout);
		putc(' ',stdout); 
		
		putBlock(s,i);
		
		putSpace(s,i);
		
		putc('\n',stdout);
	}
}