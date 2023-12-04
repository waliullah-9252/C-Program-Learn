#include<stdio.h>
// no return / used void sum(parametres)
// {
//     code 
//     sum 
//     printf
//     no return
// }
void sum(int x,int y)
{
    int s=x+y;
    printf("%d\n",s);
    return;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    return 0;
}