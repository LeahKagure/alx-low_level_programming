#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char achar;
int anint;
long along;
long long along_2;
float afloat;

 printf("Size of a char: %lu byte(s)\n", sizeof(achar));
printf("Size of an int: %lu byte(S)\n", sizeof(anint));
printf("Size of a long int: %lu byte(s)\n", sizeof(along));
printf("Size of a long long int: %lu byte(s)\n", sizeof(along_2));
printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

return (0);
}
