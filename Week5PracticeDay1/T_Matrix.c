#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n][n];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
   }
   int primary_diagonal=0,secondary_diagonal=0,flag=0;
   if(n!=n)
   {
    flag=1;
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(i==j) primary_diagonal+=a[i][j];
        if(i+j==n-1)secondary_diagonal+=a[i][j];
    }
   }
   int absulute_summation=abs(primary_diagonal-secondary_diagonal);
   printf("%d",absulute_summation);

    return 0;
}