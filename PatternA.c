#include<stdio.h>
void main()
{
    int n=6;
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= 4; j++)
        {
            if (( ((i==1)||(i==4))&& ((j==2)||(j==3)) ) || ((j==1)||(j==4)) )
            {
             printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
    }
    
}