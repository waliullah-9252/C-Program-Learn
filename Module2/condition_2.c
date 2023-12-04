#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if(tk >= 100)
    {
        printf("Burger khabo");
    }
    else if(tk >= 50)
    {
        printf("Fucka khabo");
    }
    else if(tk >= 20)
    {
        printf("Ice cream khabo");
    }
    else
    {
        printf("Kisu khabo na");
    }


    return 0;
}