#include<stdio.h>
int main() {
    char text;
    text = getchar();
    printf("받은 값 1: %c\n",text);
    while(getchar() != '\n');
    text = getchar();
    printf("받은 값 2: %c\n",text);
    return 0;
}