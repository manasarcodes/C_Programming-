#include<stdio.h>
int main(){
    int i;
    printf("Enter the number: ");
    scanf("%d",&i);
    int sum=0;
    int lastdigit=0;
    while(i!=0){
        lastdigit = i%10;
        sum = sum + lastdigit;
        i=i/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}