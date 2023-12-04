#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);

    if(number>0)
    {
        printf("%d is a positive numebr\n",number);
    }
    else if(number<0)
    {
        printf("%d is a negative number\n",number);
    }
    else 
    {
        printf("The number is zero");
    }
    /*
     else if(number == 0)
    {
        printf("%d is a zero number\n",number);
    }
    */
   
    


    return 0;
}