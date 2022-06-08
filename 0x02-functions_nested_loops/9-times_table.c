#include "main.h"

/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int main() 
{
int n, i;
printf("Enter an integer: ");
scanf("%d", &n);
for (i = 1; i <= 10; ++i) {
printf("%d * %d = %d \n", n, i, n * i);
}
return 0;
}
