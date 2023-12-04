#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
   float n,k;
   scanf("%f %f",&n,&k);
   int x=n;
   long long int arr[x];
   for(int i=0;i<x;i++)
   {
    scanf("%lld",&arr[i]);
   }
   int keep=ceil(n/k);
   int m=0,y=keep;
   long long int arr2[y];
   for(int i=0;i<keep;i++)
   {
        long long int min=INT_MAX;
        for(int j=0;j<k;j++)
        {
        if(m<n && min>arr[m])
        {
            min=arr[m];
        }
        m++;
        }
        arr2[i]=min;
   }

   for(int i=0;i<y;i++)
   {
    printf("%lld ",arr2[i]);
   }
    return 0;
}