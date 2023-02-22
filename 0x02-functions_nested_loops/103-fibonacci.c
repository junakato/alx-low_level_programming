#include <stdio.h>
/**
*main - prints the sum of the even-valued terms
*
*Return: zero by default
*/


int main(void)
{
int i;
unsigned long int next, n1 = 1, n2 = 2, sum = 0;
for (i = 1; i <= 33; i++)
{
if (n1 <= 4000000 && (n1 % 2) == 0)
{
sum = n1 + sum;
}
next = n1 + n2;
n1 = n2;
n2 = next;
}
printf("%lu\n", sum);
return (0);
}
