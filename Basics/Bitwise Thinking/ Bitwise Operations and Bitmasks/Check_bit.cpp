#include<stdio.h>
int main()
{
    int n,k; 
    scanf("%d%d",&n,&k); 
    if(n&(1<<k)) printf("true");
    else printf("false");
    return 0;
}