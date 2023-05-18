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

//////////////////////// string length
int slen(char *sierra_0)
{
	int n = 1;
	
	for (n; sierra_0[n] != NULL; n++)
	{
		
	}
	
	return n;
}

/////////////////////////////////////////////// substring
char* sub(char *sierra_0, int alpha, int bravo)
{
	char *sierra_romeo = calloc(bravo-alpha,sizeof(char));
	
	for (int a = alpha; a < bravo; a++)
	{
		sierra_romeo[a - alpha] = sierra_0[a];
	}
	
	return sierra_romeo;
}

//////////////////// string to int
long stin(char *str)
{
	long a = 0;
	int n = 0;
	
	for (int i = 0; str[i] != NULL; i++)
	{
		n++;
	}
	
	for (int i = 0; i < n; i++)
	{
		if (str[i] - 48 < 0 | str[i] - 48 > 9)
		{
			return -1;
		}
		
		long power = 1;
		
		for (int i_1 = 0; i_1 < n-(1+i); i_1++)
		{
			power *= 10;
		}
		
		a += (str[i] - 48) * power;
	}
	
	return a;
}


////////////////////////// checksum
char check(char *sierra_0)
{
	int n = 0;
	
	long check_val_0 = 0;
	long check_val_1 = 0;
	
	for (n; sierra_0[n] != NULL; n++)
	{
		
	}
	
	for (int i = 0; i < n; i++)
	{
		if (i%2 == 0)
		{
			
			check_val_0 += sierra_0[n-(1+i)] - 48;
		}
		else
		{
			int charlie = (sierra_0[n-(1+i)] - 48) * 2;
			
			check_val_1 += charlie % 10;
			check_val_1 += charlie / 10;
		}
	}
	
	printf ("#####%d,%d\n",check_val_0,check_val_1);
	
	return (char)((check_val_0 + check_val_1) % 10);
	
}

/////////////////////////// print result
void alphaF(char *sierra_0)
{
	if (check(sierra_0) == 0)
	{
		if (sierra_0[0] == '3')
		{
			if (sierra_0[1] == '4' | sierra_0[1] == '7')
			{
				print("AMEX");
			}
			else
			{
				goto point_bravo;
			}
		}
		if (sierra_0[0] == '4')
		{
			print("VISA");
		}
		if (sierra_0[0] == '5')
		{
			if (sierra_0[1] - 48 > 1 & sierra_0[1] - 48 < 6)
			{
				print("MASTERCARD");
			}
			else
			{
				goto point_bravo;
			}
		}
		if (sierra_0[0] != '3' & sierra_0[0] != '4' & sierra_0[0] != '5')
		{
			goto point_bravo;
		}
	}
	else
	{
		point_bravo:{};
		
		print("invalid");
	}
	
	print("\n");
}
	

//////////////
int main(void) 
{
	char *sierra_0;
	
	int s = 0;
	
	point_alpha:{};
	
    print("Number: ");
	
	sierra_0 = malloc(sizeof(gets(sierra_0)));
	
	gets(sierra_0);
	
	
	if (stin(sub(sierra_0,0,8)) < 0 | stin(sub(sierra_0,9,slen(sierra_0))) < 0)
	{
		goto point_alpha;
	}
	
	alphaF(sierra_0);

}