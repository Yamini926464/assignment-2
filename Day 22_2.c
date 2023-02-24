//factors count
#include<stdio.h>

int main()
{
    int c=0,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    c++;
   }
     printf("%d",c);
    return 0;
}
