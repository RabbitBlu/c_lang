#include <stdio.h>
int main(){
    int sec, minu, hr, input;
    printf("Input the Seconds: "),scanf("%d",&input);
    hr = input/3600;
    minu = input%3600/60;
    sec = input%60;
    printf("%2d Hr %2d Min %2d Sec.\n",hr,minu,sec);
}