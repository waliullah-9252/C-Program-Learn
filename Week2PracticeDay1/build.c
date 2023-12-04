#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   int min=0;
   if(a<b && a<c)
   {
    min=a;
   }
   else if(b<a && b<c)
   {
    min=b;
   }
   else
   {
    min=c;
   }

   //90 24 89

   a=a-min;
   b=b-min;
   c=c-min;

   // 66 0 65

   int ans=min;

    if(a/2<c)
    {
        ans+=a/2;
    }
    else
    {
        ans+=c;
    }
    printf("%d",ans);
    return 0;
}