#include<stdio.h>
char capital_to_small(char ch)
{
    char capital=ch;
    char small=capital+32;
    return small;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    char result=capital_to_small(ch);
    printf("%c",result);
    return 0;
}