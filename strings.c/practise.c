#include<stdio.h>
#include<string.h>
int main(){
char str[40];
//scanf("%s",str); prints only one word
// or
// gets(str);
// or
scanf("%[^\n]s",str);
printf("%s",str);
}