#include<stdio.h>
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
int main()
{
    int l,r; 
    scanf("%d%d",&l,&r); 
    int mx_xor=0;
    for(int i=l; i<=r; i++){
        for(int j=l+1; j<=r; j++){
           mx_xor=max(mx_xor,(i^j));
        }
    }
    printf("%d\n",mx_xor);
    return 0;
}