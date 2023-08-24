// WAP to input 20 number and display their sum.
#include<stdio.h>
void main()
{
    int a[20],i,sum=0;
    for(i=0;i<20;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)
    {
      sum=sum+a[i];
    }
    printf("sum of 20 num is %d\n",sum);
}
