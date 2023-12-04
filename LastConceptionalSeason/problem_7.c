#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int ali=0,bidi=0;
    for(int i=1;i<=a;i++)
    {
        char b,c;
        scanf("%c %c",&b,&c);
        // if(b>c)
        // {
        //     ali++;
        // }
        if(b<c)
        {
            bidi++;
        }
    }
    // printf("A-%d B-%d\n",ali,bidi);
    printf("A-%d",ali);

    // if(ali>bidi)
    // {
    //     printf("The Winner is Alisha");
    // }
    // if(ali<bidi)
    // {
    //     printf("The Winner is Bidisha");
    // }
    // else 
    // {
    //     printf("Tie");
    // }
    return 0;
}