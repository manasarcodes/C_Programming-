#include<stdio.h>
int main(){
int marks[10] = {99,78,88,97,69,34,30,33,31,80};
for (int i = 0;i<10;i++){
if(marks[i]<35)
printf("%d ",marks[i]); // or printf("%d ",i)
}
return 0 ;
}