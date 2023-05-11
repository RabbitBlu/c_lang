#include <stdio.h>
int main(){
    int total;
    char grade;
    scanf("%d",&total);
    // fflush(stdin);
    while(getchar() != '\n');
    scanf("%c",&grade);
    printf("Input: %d, %c\n",total,grade);
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a+b);
    return 0;
}