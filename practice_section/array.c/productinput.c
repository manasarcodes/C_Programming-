#include<Stdio.h>
int main(){
    int n = 0;
    printf("Enter a n : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:",n);
    int product = 1;
    for (int i = 0 ; i< n ; i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0 ; i< n ; i++){
    product = product*arr[i];
    }
    printf("%d ", product);
    return 0;
    
}