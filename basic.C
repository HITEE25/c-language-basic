//to find basic salary of a person
#include<stdio.h>
int main(){
    float n_salary,b_salary;
    float da,ma,pf,it;
    int e_code;
    printf("Enter the employee code\n");
    scanf("%d",&e_code);
    printf("Enter basic salary\n");
    scanf("%.2f",&b_salary);
    if(e_code<=5 && e_code>=1){
        da=b_salary*0.67;
        ma=b_salary*0.82;
        pf=b_salary*0.17;
        it=b_salary*0.15;
    }
    else if(e_code<=12 && e_code>=6){
        da=b_salary*0.65;
        ma=b_salary*0.92;
        pf=b_salary*0.19;
        it=b_salary*0.15;
    }
    else{
        da=b_salary*0.69;
        ma=b_salary*0.12;
        pf=b_salary*0.19;
        it=b_salary*0.18;
    }
    float g_salary=b_salary+da+ma;
    n_salary=g_salary-(pf+it);
    printf("Net salary is %.2f",n_salary);
    return 0;
}
