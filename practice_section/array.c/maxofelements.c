#include<stdio.h>
int main(){
    int arr[5] = {1,2,6,5,9};
    int max = -1;
    
    for(int i = 0;i<5;i++){
        if(arr[i]> max ){
            max = arr[i];
        }
    } 
    printf("The max of numbers = %d\n", max);
    
       
    
return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                
}