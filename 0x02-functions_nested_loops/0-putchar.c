/*header file*/
#include <stdio.h>
#include <main.h>
#include <unistd.h>

int main(void/**
	      *main entry
	      */)
{
putchar('');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif

int _putchar(char c/**
		    * another entry
		    */)
{
return (write(1, &c, 1));
}
