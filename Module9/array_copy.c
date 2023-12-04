#include<stdio.h>
int main()
{
   //first array input
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   //second array input
   int m;
   scanf("%d",&m);
   int b[m];
   for(int i=0;i<m;i++)
   {
    scanf("%d",&b[i]);
   }
   //first array ans or output
   int ans[n+m];
   for(int i=0;i<n;i++)
   {
    ans[i]=a[i];
   }
   //second array ans or output
   int i=n;
   for(int j=0;j<m;j++)
   {
    ans[i]=b[j];
    i++;
   }
   //first+second array ans or print
   for(int i=0;i<n+m;i++)
   {
    printf("%d ",ans[i]);
   }

    return 0;
}