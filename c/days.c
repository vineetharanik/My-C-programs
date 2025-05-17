#include<Stdio.h>
void main(){
    int y,m;
    printf("enter month and year");
    scanf("%d %d",&m,&y);
    if(m==2){
        if(y%4==0 && y%100!=0 || y%400 ==0){
            printf("29 days");
        }
        else{
            printf("28 days");
        }
    }
    else{
        if(m==4 || m==6 || m==9 || m==11){
            printf("30 days");
        }
        else{
            printf("31 days");
        }
    }
}