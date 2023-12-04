#include<stdio.h>
char small_to_capital(char ch)
{
    char small=ch;
    char capital = small-32;
    return capital;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    char result=small_to_capital(ch);
    printf("%c",result);
    return 0;
}