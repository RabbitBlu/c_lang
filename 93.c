#include <stdio.h>
int main(){
    int kor,eng,mat;
    printf("KOR: "); scanf("%d",&kor);
    printf("ENG: "); scanf("%d",&eng);
    printf("MATH: "); scanf("%d",&mat);
    kor>=70&&eng>=70||mat>=80?printf("GREAT!"):printf("OK");
    return 0;
}