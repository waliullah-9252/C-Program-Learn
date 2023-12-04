#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001];
   scanf("%s",s);
   int count=0,count1=0;
   int i=0;
   while (s[i]!='\0')
   {
    if(s[i]>='A' && s[i]<='Z')
    {
        count++;
    }
    if(s[i]>='a' && s[i]<='z')
    {
        count1++;
    }
    i++;
   }
   printf("%d %d",count,count1);
   

    return 0;
}