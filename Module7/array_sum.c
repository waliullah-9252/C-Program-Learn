#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int sum=0;
   int ar[n];
   for(int i=0; i<n; i++)
   {
    scanf("%d",&ar[i]);
   }
   for(int i=0; i<n; i++)
   {
    sum+=ar[i];
   }
    printf("%d\n",sum);

    return 0;
}