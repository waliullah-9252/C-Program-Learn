#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);
    float ans,cal;
    ans=(100-x);
    cal=(100*p)/ans;
    printf("%.2f",cal);

    return 0;
}