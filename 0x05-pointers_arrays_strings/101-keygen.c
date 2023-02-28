/*heading*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void/**
	      *main entry
	      */)
{
char password[PASSWORD_LENGTH + 1];
const char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=[]{};:'\",.<>/?\\|`~";

srand(time(NULL));

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)];
}

password[PASSWORD_LENGTH] = '\0';

printf("%s\n", password);

return (0);
}
