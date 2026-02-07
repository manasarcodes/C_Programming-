#include<stdio.h>
int main(){
    float Principle , Time , Rate , si ;
    printf("Enter Principle : ");
    scanf("%f", &Principle);
    printf("Enter Time : ");
    scanf("%f", &Time);
    printf("Enter Rate : ");
    scanf("%f", &Rate);
    si = (Principle*Time*Rate) / 100;
    printf("Your simple interest is : %f" ,si );
    return 0;
}