#include<stdio.h>
#include<limits.h>
int result(int arr[],int n,int i)
{
    if(i==n)
    {
        // return INT_MIN;
        return 0;
    }
    int max=result(arr,n,i+1);
    if(arr[i]>max)
    {
        return arr[i];
    }
    else
    {
        return max;
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
    int max=result(arr,n,0);
    printf("%d",max);
    return 0;
}