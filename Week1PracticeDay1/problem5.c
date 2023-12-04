#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 10000)
    {
        if(taka >= 20000)
        {
            printf("Buy a Gucci Bag\n");
        }
        else{
            printf("Buy a Gucci Bag\n");
            printf("Buy a Gucci Belt\n");
        }
    }
    else if (taka >= 5000)
    {
        printf("Buy a Livis Bag\n");
    }
    else
    {
        printf("Bye Something\n");
    }
    return 0;
}