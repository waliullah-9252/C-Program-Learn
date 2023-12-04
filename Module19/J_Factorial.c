#include<stdio.h>
long long int result(long long int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    long long int ans=result(n-1);
    return ans*n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int fact=result(n);
    printf("%lld",fact);
    return 0;
}