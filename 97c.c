#include <stdio.h>
int main(){
    int num, encrypt, pw, key=95012929;
    printf("Please Enter the Integer: "),scanf("%d",&num);
    encrypt = num^key;
    printf("Encrypted Data: %d\n",encrypt);
    while(1){
    printf("Please Enter the Password: "),scanf("%d",&pw);
    printf("Decrypted Data with Password: %d\n",encrypt^pw);
    }
    return 0;
}