#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);
   //lowercase to uppercase letter
   if(ch>='a' && ch<='z')
   {
    int ans=ch-32;
    printf("%c",ans);
   }
   //uppercase to lowercase letter
   else
   {
    int ans=ch+32;
    printf("%c",ans);
   }

    return 0;
}