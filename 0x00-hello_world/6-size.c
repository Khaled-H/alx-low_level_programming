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
long long d;
float e;
printf("Size of a char: %lu Byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu Byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu Byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long: %lu Byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu Byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
