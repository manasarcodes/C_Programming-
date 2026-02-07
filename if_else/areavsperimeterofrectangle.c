#include<stdio.h>
int main(){
    int l ;
    printf("Enter the length : ");
    scanf("%d", &l);
    int b ;
    printf("Enter the bredth : ");
    scanf("%d", &b);
    int a = l * b;
    int p = 2 * (l + b);
    if(a>p){
        printf("The area is greater than perimeter");
    }
    else{
        printf("The perimeter is greater than area");
    }
    return 0;
}