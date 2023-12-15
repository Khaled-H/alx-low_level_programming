#include <stdio.h>
/**
 * main - This programm intended to pring the size of datatypes
 *
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %zu Byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %zu Byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu Byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu Byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %zu Byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
