#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    if(10000>=n && n<=99999 ){
       

        for(;n>0; n = n / 10){
        int lastdigit = n%10;
        sum = sum + lastdigit;
      }
      printf("%d",sum);
    }
    
    
return 0;
}