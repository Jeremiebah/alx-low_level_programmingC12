/*heading*/
#include <stdio.h>
#include <unistd.h>

int main(void/**
	      *main function entry
	      */)
{
char *message = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
write(2, message, 58);
return (1);
}
