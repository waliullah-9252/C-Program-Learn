#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int sum=a-b;
   if(sum>=0)
   {
    printf("%d",sum);
   }
   else if(sum<=0)
   {
    printf("%d",sum);
   }
   else
   {
    printf("0");
   }

    return 0;
}