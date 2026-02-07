#include<stdio.h>
int main(){
    int i;
    printf("Enter the number: ");
    scanf("%d",i);
    int sum = 0;
    int r = 0;
    while(i!=0){
        r = r + (i%10);
        r = r%10;
    }
    printf("the sum of even digits in the given number is : ");
    return 0;
}