//use of continue statement
#include<stdio.h>
int main(){
int n;
printf("enter the n");
scanf("%d",&n);
for(int n=1;n<=10;n++){
    if(n==6){
        continue;
    }
    printf("%d\n",n);
}
return 0;

}
