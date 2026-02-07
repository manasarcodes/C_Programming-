#include<stdio.h>
int main(){
    char day = 's';
    switch (day){
        case 'm' : printf("monday\n");
        break;
        case 't' : printf("tuesday\n");
        break;
        case 'w' : printf("wednesday\n");
        break;
        case 'T' : printf("thursday");
        break;
        case 'f' : printf("friday");
        break;
        case 's' : printf("saturday");
        break;
        case 'S' : printf("Sunday");
        break;
    }
}