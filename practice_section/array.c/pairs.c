#include<Stdio.h>
int main(){
    int arr[6] = {1,2,3,4,5,6};
    
    int totalPairs = 0;
    int x = 4;
    for (int i = 0 ; i<=5 ; i++ ){
        for(int j = i + 1 ; j<=5 ; j++ ){
                if (arr[i] + arr[j] == x ){
                    totalPairs++;
                    printf("(%d,%d)\n" , arr[i],arr[j]);
                }
            }
    }
printf("%d",totalPairs);
return 0;
}