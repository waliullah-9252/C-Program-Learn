#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   long long int sum=0;
   int mul=-1;
   for(int i=0; i<n; i++)
   {
    scanf("%d",&arr[i]);
    sum+=arr[i];
   }
   
   if(sum<0)
   {
    sum=sum*mul;
    printf("%lld",sum);
   }
   else
   {
    printf("%lld",sum);
   }

    return 0;
}