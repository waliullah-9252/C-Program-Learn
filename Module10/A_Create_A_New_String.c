#include<stdio.h>
#include<string.h>
int main()
{
   char s[1000];
   scanf("%s",s);
   char t[1000];
   scanf("%s",t);
   int count=0,i=0;
   while(s[i]!='\0')
   {
    count++;
    i++;
   }
   int count1=0,j=0;
   while (t[j]!='\0')
   {
    count1++;
    j++;
   }
   printf("%d %d\n",count,count1);
   printf("%s %s",s,t);

    return 0;
}