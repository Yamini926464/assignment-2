//write a c program to read n value and print stars n lines like following:
    *
   * *
  * * *
 * * * *
* * * * *


#include<stdio.h>
int main()
{
int n, s, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(s = i; s < n; s++)
printf(" ");
for(j = 1; j <= i; j++)
printf("* ");
printf("\n");
}
return 0;
}
