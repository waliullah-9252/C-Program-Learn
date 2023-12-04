#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        int ans=ch-32;
        printf("%c",ans);
    }
    else
    {
        int ans=ch+32;
        printf("%c",ans);
    }

    return 0;
}