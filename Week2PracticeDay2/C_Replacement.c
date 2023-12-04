#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   long long int pos=1,neg=2,zero=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
       if(arr[i]>0)
       {
        arr[i]=pos;
        printf("%lld ",pos);
       }
       if(arr[i]<0)
       {
        arr[i]=neg;
        printf("%lld ",neg);
       }
       if(arr[i]<=0)
       {
        arr[i]=zero;
        printf("%lld ",zero);
       }
    }
    

    return 0;
}