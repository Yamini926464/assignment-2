//write a c program to print armstrong numbers in the given range.
#include<stdio.h>
void main(){
    int num,r,sum,temp,x,y;
    printf("number of range: ");
    scanf("%d",&x);
    printf(" number of range : ");
    scanf("%d",&y);
    printf("Armstrong numbers in given range are: ");
    for(num=x;num<=y;num++){
         temp=num;
         sum = 0;
         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}
