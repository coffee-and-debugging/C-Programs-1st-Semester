// WAP to input 7 number and display largest/smallest number.
#include<stdio.h>
void main()
{
    int i,a[7],l,s;
    for(i=0;i<7;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    l=s=a[0];
    for(i=0;i<7;i++)
    {
        if(a[i] > l)
        l=a[i];
        else
        s=a[i];
    }
       printf("%d is largest number\n",l);
       printf("%d is smallest number\n",s);
}