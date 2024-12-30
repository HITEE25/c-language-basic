//to print even number between two numbers
#include<stdio.h>
int main(){
    int x,y,sum=0,count=0,i;
    float avg;
    // input by user
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value ofn y\n");
    scanf("%d",&y);
    //number between x and y
    printf("even numbers between %d and %d",x,y);
    //to check the number is even
    for( i=x;i<=y;i++){
        if(i%2==0){
        printf("%d\n",i);
        sum=sum+i;
        count++;
        }
    }
    printf("sum of numbers are %d",sum);
    avg=(float)sum/count;
    printf("avg of numbers are%2f",avg);
    return 0;
}
