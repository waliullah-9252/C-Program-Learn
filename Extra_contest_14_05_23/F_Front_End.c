#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    printf("%d ",a[0]);
    break;
   }
   for(int i=n-1;i>=1;i--)
   {
    printf("%d",a[i]);
    int b=a[i];
   }
   

    return 0;
}