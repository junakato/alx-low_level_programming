#include <stdio.h>

/**
*main - computes and prints sum of multiple
*
*Return: Zero by default
*/

int main(void)
{
int i;
unsigned long int sum1, sum2, totalsum;
sum1 = 0;
sum2 = 0;
totalsum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0)
{
sum1 = sum1 + i;
}
else if ((i % 5) == 0)
{
sum2 = sum2 + i;
}
}
totalsum = sum1 + sum2;
printf("%lu\n", totalsum);
return (0);
}
