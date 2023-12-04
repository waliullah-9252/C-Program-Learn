#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n][n];
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
   }
    for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++)
        {
            printf("*");
            if(i==j)
            {
                
                if(arr[i][j]!='*')
                {
                    printf(" ");
                    if(arr[i][j]==' ')
                    {
                        printf("\\");
                    }
                }
            }
         }
        printf("\n");
   }

    return 0;
}