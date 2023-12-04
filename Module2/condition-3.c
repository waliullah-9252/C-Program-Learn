#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if(tk >= 5000)
    {
        printf("Cox's Bazar jabo\n");
        if(tk >= 10000)
        {
            printf("Saint Martin jabo\n");
            if(tk >= 13000)
            {
                printf("Bandorbon jabo\n");
                if(tk >= 15000)
                {
                    printf("Jaflong jabo\n");
                }
                else
                {
                    printf("Again back to home\n");
                }
            
            }
            else
            {
                printf("Back to home\n");
            }
        }
        else
        {
            printf("Ferot chole asbo\n");
        }
    }
    else
    {
        printf("Kothaw jabo na\n");
    }


    return 0;
}