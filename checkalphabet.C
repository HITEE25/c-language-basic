//to check alphabet is lower or upper case
#include<stdio.h>
int main(){
    int ch;
    printf("Enter the alphabet");
    scanf("%d",&ch);
    if('A'<=ch && ch>='z'){
        printf("upper case\n");
    }
    else if('a'<=ch && 'z'>=ch){
        printf("lower case\n");
    }
    else{
        printf("not a english letter\n");
    }
    return 0;
}
