//calculator using if statement
#include<stdio.h>
int main(){
int a,b,c,ch;
printf("Enter the value of b and c\n");
scanf("%d %d",&b,&c);
printf("Enter the choice\n");
scanf("%d",&ch);
if(ch == 1){
    a=b+c;
    printf("addtion of two numbers are %d\n",a);
}
else if(ch == 2){
    a=b-c;
    printf("subtraction of two numbers are %d\n",a);
}
else if(ch == 3){
    a=b*c;
    printf("multiplication of two numbers are %d\n",a);
}
else if(ch == 4){
    a=b/c;
    printf("b divsion c is %d\n",a);
}
else if(ch == 5){
    a=b%c;
    printf("b module c is %d\n",a);
}
else{
    printf("not a valid number\n");
}
return 0;
}
