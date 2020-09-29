#include <stdio.h>
int _strlen(char *s);
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = NULL;

	int len;
	len = _strlen(s);
	printf("%s has %d letters\n", s, len);
	s = "Holberton";
	len = _strlen(s);
	printf("%s has %d letters\n", s, len);
	return (0);
}

int _strlen(char *s)
{
	int len;

	while (s[len++])
		continue;
	return len;
}

