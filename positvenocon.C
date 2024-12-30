//using conditional statement to find positive,negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of \n");
    scanf("%d",&n);
    (n>0)?printf("The number is positive"):
    (n<0)?printf("The number is negstive"):
    printf("The number is zero");
    return 0;
}
