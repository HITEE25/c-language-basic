//calculator using switch statement
#include<stdio.h>
int main(){
    int a,b,c,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("enter the value of b & c\n");
    scanf("%d,%d",&b,&c);
    switch(n){
        case 1:a=b+c;
        printf("add of numbers are %d",a);
        break;
        case 2:a=b-c;
        printf("subtraction of numbers are %d",a);
        break;
        case 3:a=b*c;
        printf("multiplication of numbers are %d",a);
        break;
        case 4:a=b/c;
        printf("division of numbers are %d",a);
        break;
        default:printf("not a valid number");
    }
    return 0;
}
