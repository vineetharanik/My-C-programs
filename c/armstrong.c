#include<Stdio.h>
void main(){
    int o,n,r=0,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    o=n;
    while(n!=0){
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(o==s){
        printf("armstrong number");
    }
    else{
        printf("not an armstrong number");
    }
}