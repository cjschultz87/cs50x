#include <ctype.h>
//#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

//int compute_score(string word);
int compute_score(char *word);


void sPrint(char *sierra)
{
	for (int i = 0; sierra[i] != NULL; i++)
	{
		putc(sierra[i],stdout);
	}
	
	putc('\n',stdout);
}

int main(void)
{
	char *sierra_1 = "player 1";
	char *sierra_2 = "player 2";
	char *sierra_tie = "tie";
	
    // Get input words from both players
    //string word1 = get_string("Player 1: ");
    //string word2 = get_string("Player 2: ");
	char *word1 = malloc(sizeof(gets(word1)));
	char *word2 = malloc(sizeof(gets(word2)));
	
	gets(word1);
	gets(word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
	
	if (score1 == score2)
	{
		sPrint(sierra_tie);
	}
	else
	{
		if (score1 > score2)
		{
			sPrint(sierra_1);
		}
		else
		{
			sPrint(sierra_2);
		}
	}
}

//int compute_score(string word)
int compute_score(char *word)
{
    // TODO: Compute and return score for string
	
	int ALPHABET[] = {'a','b','c','d','e','f','g','h','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	int score = 0;
	
	for (int i = 0; word[i] != NULL; i++)
	{
		for (int i_1 = 0; ALPHABET[i_1] != NULL; i_1++)
		{
			if (ALPHABET[i_1] == word[i])
			{
				score += POINTS[i_1];
				
				goto point_alpha;
			}
		}
		
		point_alpha:{};
	}
	
	return score;
}
