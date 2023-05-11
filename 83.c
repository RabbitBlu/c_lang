#include <stdio.h>
int main(){
    char string[30];
    fgets(string,30,stdin);
    printf("INPUT: %s\n",string);
    fgets(string,30,stdin);
    printf("INPUT 2: %s\n",string);
    return 0;
}