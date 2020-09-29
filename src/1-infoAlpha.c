#include <stdio.h>
int is_upper(char c);
int is_lower(char c);
void infoAlpha(char c);

/**
 * main - print if a char is UPPER, lower or Not Alpha
 * Return: always 0
 */
int main(void)
{
	char c;

	c = 'a';
	infoAlpha(c);
	c = 'A';
	infoAlpha(c);
	c = '@';
	infoAlpha(c);
	return (0);
}

/**
 * infoAlpha - print if a char is UPPER, lower or Not ALPHA
 */
void infoAlpha(char c)
{
	if (is_upper(c))
		printf("%c is UPPER\n", c);
	else if (is_lower(c))
		printf("%c is lower\n", c);
	else
		printf("%c is not ALPHA\n", c);
}

int is_upper(char c)
{
	return ('a' <= c || c <= 'Z');
}

int is_lower(char c)
{
	return ('a' <= c || c <= 'z');
}
