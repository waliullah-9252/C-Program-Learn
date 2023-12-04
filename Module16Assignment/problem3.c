#include<stdio.h>
int count_before_zero(int arr[],int x)
{
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]==0)
        {
            break;
        }
        count++;
    }
    return count;
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int cnt=count_before_zero(arr,n);
   printf("%d",cnt);

    return 0;
}