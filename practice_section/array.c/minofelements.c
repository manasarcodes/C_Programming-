#include<stdio.h>
int main(){
    int arr[4] = {2,5,7,3};
    int min = 100;
    for (int i = 0; i<4; i++){
        if(min > arr[i]);
        min = arr[i];
    }
    printf("%d\n",min);
return 0;
} 