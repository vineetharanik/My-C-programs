#include<Stdio.h>
void main(){
     int n,i;
     printf("enter a number ");
     scanf("%d",&n);
     for(i=1;i<=n/2;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
     }
}