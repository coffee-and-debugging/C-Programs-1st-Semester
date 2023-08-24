/* WAP to display following pattern.
*
*  *
*  *  *
*  *  *  *
*  *  *  *  *        

*/

#include<stdio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
        printf("*\t");
        }
    printf("\n");
    }
    
    
}
