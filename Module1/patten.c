#include<stdio.h>
int main()
{
    int n,col,row;
    // printf("Enter any value : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }


    return 0;
}