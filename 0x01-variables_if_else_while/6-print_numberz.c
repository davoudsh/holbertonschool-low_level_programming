#include <stdio.h>
/**
 * main - print base 10 numbers
 * Return: 0 if successful
 */

int main(void)
{
int a = '0';
while (a < '9')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
