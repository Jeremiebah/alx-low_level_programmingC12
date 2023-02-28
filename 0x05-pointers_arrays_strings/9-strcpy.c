/*header*/
#include <stdio.h>

char *_strcpy(char *dest, char *src /**
				     *main entry
				     */)
{
char *ptr = dest;
while (*src != '\0')
{
*dest++ = *src++;
}
*dest = '\0';
return (ptr);
}

int main(void /**
	  *main
	  */)
{
char source[] = "Hello, world!";
char dest[20];
_strcpy(dest, source);
printf("Source string: %s\n", source);
printf("Copied string: %s\n", dest);
return (1);
}
