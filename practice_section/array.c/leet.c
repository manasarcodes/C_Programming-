
#include<stdio.h>
int main(){
    int numsSize;

    int nums[numsSize];
    printf("Enter nums");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);  // read each number
    }
   

    int target;
    printf("Enter target");
    scanf("%d",&target);
    
    
    for(int i = 0 ; i<numsSize ; i++){
        for(int j = i+1 ; j<numsSize ; j++){
           if(nums[i] + nums[j] == target){
            printf("%d,%d",nums[i],nums[j]);

           }
        }
        
    
    
    }
return 0;
}