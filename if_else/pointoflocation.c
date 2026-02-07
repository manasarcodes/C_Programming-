#include <stdio.h>
int main(){
    int x,y ;
    printf("Enter the coordinate : ");
    scanf("%d %d" ,&x,&y);
    if(x==0 && y==0){
        printf("Lies on origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("The point is on x axis");
    }
    else{
        printf("The point does not x or y axis or orgin");
    }
     return 0;
    }