#include<stdio.h>
int main()
{
   int row,col;
   scanf("%d %d",&row,&col);
   //input a matrix
   int a[row][col];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
   //input b matrix
   int b[row][col];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&b[i][j]);
    }
   }
   //output c matrix
   int c[row][col];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
   }
   //output summation
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
   }

    return 0;
}