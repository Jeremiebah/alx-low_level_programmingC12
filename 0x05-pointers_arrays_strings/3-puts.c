/*header*/
void _puts(char *str/**
		     *main function
		     */)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
