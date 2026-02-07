#include<Stdio.h>
int main(){
    int arr[5] = {1,1,3,4,7};
    int totalPairs = 0;
    int x = 5;
    for ( int i = 0 ; i<=4 ; i++ ){
        for ( int j = i + 1 ; j<=4; j++){
            for ( int k = j +1 ; k<=4 ; k++){
            if(arr[i] + arr[j] +arr[k] == x){
            totalPairs++;
            printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            return 0;
            }    
            
            
        }
    }
printf("%d",totalPairs);
return 0;
}
}