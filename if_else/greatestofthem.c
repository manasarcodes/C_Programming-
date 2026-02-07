#include <stdio.h>
int main(){
    int n1;
    printf("Enter the n1 : ");
    scanf("%d", &n1);
    int n2;
    printf("Enter the n2 : ");
    scanf("%d", &n2);
    int n3;
    printf("Enter the n3 : ");
    scanf("%d", &n3);
    if(n1>n2 && n1>n3){
        printf("the number n1 is greater");
    }
    if(n2>n3 && n2>n1){
        printf("the number n2 is greater");
    }
    if(n3>n1 && n3>n2){
        printf("the number n3 is greater");
    }
    return 0;

}