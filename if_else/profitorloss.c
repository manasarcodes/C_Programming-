#include <stdio.h>
int main(){
    int cp ;
    printf("Enter the cp : ");
    scanf("%d", &cp);
    int sp ;
    printf("Enter the sp : ");
    scanf("%d", &sp);
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
         printf("No loss no gain");
    }
       
    return 0;

}