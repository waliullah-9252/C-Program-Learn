#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i == (n + 1) / 2 && j == (n + 1) / 2)
            {
                printf("#");
            }
            else if(i==(n/2)+1 || j==(n/2)+1)
            {
                printf("#");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
   }

    return 0;
}