#include <stdio.h>
int main(){
    int a ;
    printf("Enter a :");
    scanf("%d",&a);
    int b ;
    printf("Enter b :");
    scanf("%d",&b);
    int c ;
    printf("Enter c :");
    scanf("%d",&c);
    if(a+b > c && b+c > a && c+a > b ){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;

    }
