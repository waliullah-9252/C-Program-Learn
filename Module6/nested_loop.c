#include<stdio.h>
int main()
{
    int i,j;
   for(int j=1; j<=4; j++)
   {
    for(int i=1; i<=j; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
   }

    return 0;
}