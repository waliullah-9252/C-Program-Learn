#include<stdio.h>
// no return used void and no parameters used void
// {
//     input 
//     output 
//     no return
// }
void sum(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x+y;
    printf("%d\n",s);
}
int main()
{
    sum();
    sum();
    return 0;
}