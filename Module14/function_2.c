#include<stdio.h>
// return_type sum(no parametres or used void)
// {
//     scan use to user dified function
//     code 
//     return what?
// }
int sum(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int s=x+y;
    return s;
}
int main()
{
    int s=sum();
    printf("%d\n",s);
    return 0;
}