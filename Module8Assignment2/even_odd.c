#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int v[n];
   int sum=0,sum1=0;
   for(int i=0; i<n; i++)
   {
    scanf("%d",&v[i]);
    if(v[i]%2==0)
    {
        sum=sum+v[i];
    }
    if(v[i]%2!=0)
    {
        sum1=sum1+v[i];
    }
   }
   printf("%d %d",sum,sum1);

    return 0;
}