#include<stdio.h>
void main(){
    int n,c=0,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        printf("prime number");}
        else{
            printf("not a prime number");
        }
}