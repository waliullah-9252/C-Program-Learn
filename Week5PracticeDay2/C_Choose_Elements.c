#include<stdio.h>
int main()
{
   int n,k;
   scanf("%d %d",&n,&k);
   long long int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%lld",&arr[i]);
   }

   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   long long int count=0;
   for(int i=0;i<k;i++)
   {
    if (arr[i]<0)
    {
        break;
    }     
    else
    {
        count+=arr[i];
    }
   }
   printf("%lld",count);

    return 0;
}