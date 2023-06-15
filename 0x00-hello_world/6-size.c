#include <stdio.h>
/**
 * main - initiates code
 * function - return sizes of variables
 * Return: 0 (success)
 **/
int main()
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu bytes(n)\n",(unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(n)\n",(unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(n)\n",(unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(n)\n",(unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(n)\n",(unsigned long)sizeof(f));
return (0);
