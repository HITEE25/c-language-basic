//print odd numbers between 5 t0 50
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
