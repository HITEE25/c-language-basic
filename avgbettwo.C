#include<stdio.h>
int main(){//to print number between x and y
    int x,y,sum=0,count=0;
    int avg;
    printf("Enter the value of x\n");//input x
    scanf("%d",&x);
    printf("Enter the value of y\n");//input y
    scanf("%d",&y);
    printf("number between %d and %d is\n",x,y);
    for(int i=x;i<=y;i++){
        printf("%d\n",i);
        sum=sum+i;
        count++;
    }
    printf("sum of numbers are %d \n",sum);
    avg=sum/count;
    printf("avg of numbers are %2d \n",avg);
    return 0;
}

