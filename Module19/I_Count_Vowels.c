#include<stdio.h>
int result(char s[],int i)
{
    // base case 
    if(s[i]=='\0')
    {
        return 0;
    }
    int ans=result(s,i+1);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]+=32;
    }
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' 
    || s[i]=='o' || s[i]=='u')
    {
        return ans+1;
    }
    else 
    {
        return ans;
    }

}
int main()
{
   char s[201];
   fgets(s,201,stdin);
   int count=result(s,0);
   printf("%d",count);

    return 0;
}