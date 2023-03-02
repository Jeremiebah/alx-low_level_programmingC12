/*heading*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *leet(char *str/**
		     *main entry
		     */)
{
char *encoded = malloc(strlen(str) + 1);
int i, j;

for (i = 0, j = 0; str[i] != '\0'; i++, j++)
{
if (str[i] == 'a' || str[i] == 'A')
encoded[j] = '4';
else if (str[i] == 'e' || str[i] == 'E')
encoded[j] = '3';
else if (str[i] == 'o' || str[i] == 'O')
encoded[j] = '0';
else if (str[i] == 't' || str[i] == 'T')
encoded[j] = '7';
else if (str[i] == 'l' || str[i] == 'L')
encoded[j] = '1';
else
encoded[j] = str[i];
}
encoded[j] = '\0';

return (encoded);
}

int main(/**
	  *entry
	  */)
{
char str[] = "Hello, World!";
char *encoded = leet(str);
printf("%s\n", encoded);
free(encoded);
return (0);
}
