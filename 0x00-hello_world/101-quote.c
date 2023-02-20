/*header line*/
#include <unistd.h>
#include <stdlib.h>

int main(void /**
*main functions
*/)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fwrite(message, sizeof(char), sizeof(message), stderr);
return (1);
}
