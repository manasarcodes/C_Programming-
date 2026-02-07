#include<stdio.h>
int calcSquare(int n);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The square is : %d", calcSquare(n));
return 0;
}
int calcSquare(int n){
    return n*n;
}
