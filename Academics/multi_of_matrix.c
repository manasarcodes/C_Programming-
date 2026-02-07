#include<stdio.h>
int main(){
    int r1,r2,c1,c2;

    printf("Enter number of rows(r1) : ");
    scanf("%d",&r1);
    printf("Enter number of column(c1) : ");
    scanf("%d",&c1);
    
    int arr[r1][c1];
    printf("Enter elements of arr: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr[i][j]);
            printf(" %d",arr[i][j]);
        }
    }
    printf("\nEnter number of rows(r2) : ");
    scanf("%d",&r2);
    printf("Enter number of column(c2) : ");
    scanf("%d",&c2);
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    int brr[r1][c1];
    printf("\nEnter elements of brr: ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&brr[i][j]);
            printf(" %d",brr[i][j]);
        }
    }

    int crr[r1][c2];
    for (int i = 0 ; i<r1 ; i++){
        for(int j=0; j<c2 ; j++){
            for(int k=0 ; k<c1; k++){
                crr[i][j] = 0;
            }
        }
    }

    for (int i = 0 ; i<r1 ; i++){
        for(int j=0; j<c2 ; j++){
            for(int k=0 ; k<c1; k++)
                crr[i][j] += arr[k][j] * brr[i][k];
            
        }
    }
    printf("\nResultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }


}