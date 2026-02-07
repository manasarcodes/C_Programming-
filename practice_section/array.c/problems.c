#include<stdio.h>
int main(){
    int nums1length;
    int nums2length;
    printf("Enter the length of nums1: ");
    scanf("%d", &nums1length);

    printf("Enter the length of nums2: ");
    scanf("%d", &nums2length);

    int nums1[nums1length];
    int nums2[nums2length];

    printf("Enter %d elements = ",nums1length);
    for (int i = 0; i < nums1length; i++) {
        printf("nums1[%d] = ", i);
        scanf("%d", &nums1[i]);
    }
    printf("Enter %d elements = ",nums2length);
    for (int i = 0; i < nums2length; i++) {
        printf("nums2[%d] = ", i);
        scanf("%d", &nums2[i]);
    }
    for (int i = 0; i < nums1length; i++){
    printf("%d ",nums1[i]);
    }
    printf("\n");
    for (int i = 0; i < nums2length; i++){
    printf("%d ",nums2[i]);
    }

    // to merge
    int mergedLength = nums1length + nums2length;
    int merged[mergedLength];
    for (int i = 0; i < nums1length; i++) {
        merged[i] = nums1[i];
    }
    for (int i = 0; i < nums2length; i++) {
        merged[nums1length + i] = nums2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < mergedLength; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    //mean
    for (int i = 0; i < mergedLength; i++){
        
        count++;
    }
    return 0;
}
    