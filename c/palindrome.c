#include<stdio.h>
void main(){
    int n,i,s=0,o,r=0;
    printf("enter a number");
    scanf("%d",&n);
    o=n;
    while(n!=0){
        r=n%10;
        s=s*10;
        s=s+r;
        n=n/10;
    }
    if(o==s){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}