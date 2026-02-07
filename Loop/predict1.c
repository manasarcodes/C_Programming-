#include<stdio.h>
int main(){
    int x = 5;
    printf("%d\n",x);
    ++x; // not x++
    // ++x means increment then use but x++ means use x and then increment
    printf("%d\n",x);
    return 0;
}