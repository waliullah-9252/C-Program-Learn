#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001];
   scanf("%s",s);
   int count[26]={0};
   for(int i=0;i<strlen(s);i++)
   {
    int value=s[i]-'a';
    count[value]++;
   }
   for(int i=0;i<26;i++)
   {
    printf("%c - %d\n",i+'a',count[i]);
   }


    return 0;
}