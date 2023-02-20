/*Write a program that prints all possible combinations of single-digit n*/
#include <stdio.h>

int main(/**
	  *main entry function
	  */)
{
for (int i = 0; i < 9; i++)
{
putchar(i + 48);
putchar(',');
}
putchar('9');

putchar('\n');
return (0);
}
