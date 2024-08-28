#include<stdio.h>
int main(){
    int n1,n2;
    char op;
    printf("Enter a number: ");
    scanf("%d",&n1);
    printf("Enter an operator(+, -, *, /): ");
    scanf(" %c",&op);
    printf("Enter another number: ");
    scanf("%d",&n2);
    switch (op)
    {
    case '+':
        printf("Addition: %d",n1+n2);
        break;
    case '-':
        printf("Difference: %d",n1-n2);
        break;
    case '*':
        printf("Multiplication: %d",n1*n2);
        break;
    case '/':
        printf("Division: %.3lf",(double)n1/n2);
        break;
    
    default:
        break;
    }

}