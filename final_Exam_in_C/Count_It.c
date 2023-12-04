#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001];
   fgets(s,1001,stdin);
   int small=0,capital=0,spaces=0;
   for(int i=0;i<strlen(s);i++)
   {
    if(s[i]>='A' && s[i]<='Z')
    {
        capital++;
    }
    if(s[i]>='a' && s[i]<='z')
    {
        small++;
    }
    if(s[i]==' ')
    {
        spaces++;
    }
   }
   printf("Capital - %d\nSmall - %d\nSpaces - %d",capital,small,spaces);

    return 0;
}