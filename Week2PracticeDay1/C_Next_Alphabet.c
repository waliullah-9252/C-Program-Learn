#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);
   int b='z';
   if(ch==b)
   {
    printf("a",b);
   }
   else
   {
    char a;
    a=ch+1;
    printf("%c",a);
   }

    return 0;
}