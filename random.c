#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int random = 0;
    for(int i = 0; i< 10; i++){
        random = rand()%9+1;
        printf("%d\n",random);
    }
}