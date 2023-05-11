#include <stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter the 3 Interger: ");
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    max = b > max ? b: max;
    max = c > max ? c: max;
    printf("%d",max);
}