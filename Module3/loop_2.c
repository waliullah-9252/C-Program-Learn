#include<stdio.h>
int main()
{
    int i;

    for(i=20; i>=1; i=i-1)
    {
        printf("%d\n",i);
    }
    printf("\n\n");
    //again
    for(i=10; i>=1; i--)
    {
        printf("%d\n",i);
    }


    return 0;
}