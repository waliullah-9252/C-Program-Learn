#include<stdio.h>
#include<limits.h>
int main()
{
   int n;
   scanf("%d",&n);
   long long int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%lld",&arr[i]);
   }
    int max=INT_MIN,min=INT_MAX,pos,posx;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>max)
    {
       max=arr[i];
       pos=i;
    }
    if(arr[i]<min)
    {
        min=arr[i];
        posx=i;
    }
   }
   int temp=arr[pos];
    arr[pos]=arr[posx];
    arr[posx]=temp;
   for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }


    return 0;
}