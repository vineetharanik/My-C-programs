//to build a simple calculator using c language
#include<stdio.h>
int main()
{
    char op;
    double num1,num2,result;
    //to display options
    printf("simple calculator\n");
    printf("choose a operator(+,-,*,/)\t");
    scanf("%c",&op);
    //input numbers
    printf("enter first number\t");
    scanf("%lf",&num1);
    printf("enter second number\t");
    scanf("%lf",&num2);
    //performing operations
    switch(op){
        case '+':
            result=num1+num2;
            printf("%.2lf\n",result);
            break;
        case '-':
            result=num1-num2;
            printf("%.2lf\n",result);
            break;
        case '*':
            result=num1*num2;
            printf("%.2lf\n",result);
            break;
        case '/':
            result=num1/num2;
            printf("%.2lf\n",result); 
            break;}

}