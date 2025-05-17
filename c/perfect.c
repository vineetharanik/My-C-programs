#include<stdio.h>
void main(){
    int n,s=0,i,o;
    printf("enter a number");
    scanf("%d",&n);
    o=n;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            s+=i;        }
    }
    if(o==s){
        printf("perfect number");
    }
    else{
        printf("not a perfect number");
    }
}