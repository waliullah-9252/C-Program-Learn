#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        long long int sum1=(a*(a+1)/2)-(b*(b+1)/2);
        long long int sum2=(b*(b+1)/2)-(a*(a+1)/2);
        if(a>b)
        {
            sum1+=b;
            printf("%lld\n",sum1);
        }
        else
        {
            sum2+=a;
            printf("%lld\n",sum2);
        }
    }
    return 0;
}