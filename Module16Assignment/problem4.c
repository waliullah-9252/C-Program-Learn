// //has return + parameters
#include<stdio.h>
int max(int a,int b)
{
    int mx;
    if(a>b)
    {
        mx=a;
    }
    else
    {
        mx=b;
    }
    return mx;
}
int main()
{
   printf("%d",max(17,20));
    return 0;
}

// //has return + no parameters
#include<stdio.h>
int multification(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sum=x*y;
    return sum;
}
int main()
{
    int result=multification();
   printf("%d",result);
    return 0;
}

// //no return + parameters
#include<stdio.h>
void even_odd(int a)
{
    if(a%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
int main()
{
   int x;
   scanf("%d",&x);
   even_odd(x);
    return 0;
}

//no return + no parameters
#include<stdio.h>
void positive_negative(void)
{
   int x;
   scanf("%d",&x);
   if(x>0)
   {
    printf("Positive\n");
   }
   else
   {
    printf("Negative\n");
   }
}
int main()
{
   positive_negative();
    return 0;
}