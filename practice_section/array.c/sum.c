#include<stdio.h>     
void reverse(int arr[],int si,int ei){
    for(int i = si, j = ei; i<j ; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
int main(){
int arr;
int brr;   
scanf("%d",&arr);
scanf("%d",&brr); 

return 0;
}
}