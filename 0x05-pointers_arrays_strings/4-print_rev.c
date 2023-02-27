/*header*/
#include <stdio.h>
void print_rev(char *s /**
			*main entry
			*/)
{
int length = 0;
char *t = s;
while (*t != '\0')
{
length++;
t++;
}
for (int i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
