//end the statement if number is odd
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
for( ; ; ){
    if(n%2 != 0){
        break;
    }
    printf("n is even, enter another value:\n");
    scanf("%d", &n); // Update n to avoid infinite loop
}
printf("end");
return 0;
}
