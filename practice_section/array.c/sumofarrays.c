#include<stdio.h>
int main(){
    int arr[5] = {1 , 2 , 3 , 5};
    int sum = 0;
    for(int i=0;i<=4;i++
    ){  
        sum = sum + arr[i];
    }
    
    reverse(arr,1,2);
    printf("%d",arr);
    return 0;
}