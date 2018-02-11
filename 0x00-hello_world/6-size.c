#include <stdio.h>

/**
 * main - main function in C
 * Return: 0, exit program
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(li));
printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
printf("Size of a float: %d byte(s)\n", sizeof(f));

return (0);

}
