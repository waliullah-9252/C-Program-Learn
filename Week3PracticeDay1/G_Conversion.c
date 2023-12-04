#include<stdio.h>
#include<string.h>
int main()
{
   char s[1000001];
   gets(s);
   int ln=strlen(s);
   for(int i=0;i<ln;i++)
   {
    if(s[i]>='a' && s[i]<='z')
    {
        s[i]-=32;
    }
    else if(s[i]==',')
    {
        s[i]=' ';
    }
    else
    {
        s[i]+=32;
    }
   }

    printf("%s",s);
   

    return 0;
}