#include<stdio.h>
int main()
{
    int n,col,row;
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ",col);
        }
        printf("\n");
    }


    return 0;
}