#include<stdio.h>
void reverse(int arr[],int n)
{
   int i=0,j=n;
   while(i<j)
   {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   } 
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
   for(int i=0;i<n;i++)
   {
            if(arr[i]==0)
            {
                reverse(arr,i-1); 
            }
    
   }
   for(int i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
    return 0;
}