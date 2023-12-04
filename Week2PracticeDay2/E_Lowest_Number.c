#include<stdio.h>
#include<limits.h>
int main()
{
   int n;
   scanf("%d",&n);
   int min=INT_MAX;
   int new,a;
   int arr[n];
   for(int i=0; i<n; i++)
   {
    scanf("%d",&arr[i]);
    if(arr[i]<min)
    {
        min=arr[i];
        new=arr[i];
        a=i+1;   
    }
   }
   printf("%d %d",new,a);

    return 0;
}