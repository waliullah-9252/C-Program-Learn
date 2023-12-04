#include<stdio.h>
int main()
{
   long long int e,m,b;
   scanf("%lld %lld %lld",&e,&m,&b);
   long long int min;
   if(e<m && e<b)
   {
    min=e;
   }
   else if(m<e && m<b)
   {
    min=m;
   }
   else
   {
    min=b;
   }

   //90 24 89

   e=e-min;
   m=m-min;
   b=b-min;

   // 66 0 65

   long long int ans=min;

    if(e>0 && b>0)
    {
        if(e/2<b)
    {
        ans+=e/2;
    }
    else
    {
        ans+=b;
    }
    }
    printf("%lld",ans);
    
    return 0;
}