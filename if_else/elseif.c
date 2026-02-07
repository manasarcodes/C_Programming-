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
    else if(cp>sp){
        printf("Loss");
    }
    else{
         printf("No loss no gain");
    }
       
    return 0;

}