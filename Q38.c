// WAP to input age of 7 students and find number of students whose are between 10 to 18.
#include<stdio.h>
void main()
{
    int i,a[7],c=0;
    for(i=0;i<7;i++)
    {
        printf("enter age of students:");
        scanf("%d",& a[i]);
    }
    for(i=0;i<7;i++)
    {
        if(a[i]>10 && a[i]<18)
        c++;
    }    
    printf("Number of student whose are between 10 to 18 is: %d\n",c);
}