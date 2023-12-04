#include<stdio.h>
long long int result(int arr[],int n)
{
    if(n==0) return 0;
    return arr[n-1] + result(arr,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    long long int sum=result(arr,n);
    printf("%lld",sum);
    return 0;
}