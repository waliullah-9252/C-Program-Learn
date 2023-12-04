#include<stdio.h>
int charecter_to_ascci(char ch)
{
    int ascci=ch;
    return ascci;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    int result = charecter_to_ascci(ch);
    printf("%d",result);
    return 0;
}