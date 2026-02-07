#include<stdio.h>
int main(){
    float r;
    printf("Enter r");
    scanf("%f" , &r);
    float v = 3.14 * r * r;
    printf("The volume is : %f ",v);
    return 0;
}