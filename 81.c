#include<stdio.h>
int main() {
    char text;
    text = getchar();
    printf("���� �� 1: %c\n",text);
    while(getchar() != '\n');
    text = getchar();
    printf("���� �� 2: %c\n",text);
    return 0;
}