// WAP to input 20 number and display sum of odd number.
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
        if(a[i]%2==1)
        sum=sum+a[i];
    }
    printf("sum of odd num is %d\n",sum);
}