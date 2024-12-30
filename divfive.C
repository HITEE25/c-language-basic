//number divsible 5 from n to 100
#include<stdio.h>
int main(){
    // declare the variables
    int i,sum=0,count=0,n;
    float avg;
    // input from user
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("numbers exactly divisible by 5 until number < 100");
    for(i=n;i<=100;i++){
        if(i%5 == 0){
        // to ensure number is divisible by 5
        printf("%d\n",i);
        sum += i;
        count++;
        }
    }
    printf("sum of numbers are %d\n",sum);
    avg=(float)sum/count;
    printf("avg of numbers are %2f",avg);
    return 0;
}
