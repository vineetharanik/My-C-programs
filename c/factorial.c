#include<stdio.h>
void main(){
    int n,i,s=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s*=i;
    }
    printf("%d",s);
}