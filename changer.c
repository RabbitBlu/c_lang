#include <stdio.h>
int main(){
    long int dodo, gogo;
    long int total, deposit, change, rest, menu;
    long int w500, w100, w50, w10;
    long int cnt_dodo, cnt_gogo;
    int menu_a = 0;
    while(1){
        menu_a = 0;
        printf("또또면 70원, 꽁꽁바 30원. 각 갯수 띄워서 입력: ");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);
        dodo = 70*cnt_dodo;
        gogo = 30*cnt_gogo;
        total = dodo+gogo;
        printf("투입할 금액 입력: ");
        scanf("%d",&deposit);
        if(deposit > total){
            change = deposit - total;
            w500 = change / 500;
            w100 = change % 500 / 100;
            w50 = change % 100 / 50;
            w10 = change % 50 / 10;
            printf("또또면 전체 금액: %d\n꽁꽁바 전체 금액: %d\n거스름돈: %d\n==========[ 거스름돈 동전 최소 갯수 ]==========\n500원: %d\n100원: %d\n50원: %d\n10원: %d",dodo,gogo,change,w500,w100,w50,w10);
            printf("\n==============================\n\n");
            while(menu_a == 0){
                printf("[0] 계속하기\n[1] 나가기");
                scanf("%d",&menu);
                if(menu == 1){
                    menu_a=1;
                }
                else if(menu == 0){
                    menu_a=1;
                    continue;
                }
                else printf("존재하지 않는 명령입니다.\n");
            }
            if(menu == 1){
                break;
            }
        }
        else{
            printf("금액 부족.\n");
            printf("==============================\n\n");
            while(menu_a == 0){
                printf("[0] 계속하기\n[1] 나가기");
                scanf("%d",&menu);
                if(menu == 1){
                    menu_a=1;
                }
                else if(menu == 0){
                    menu_a=1;
                    continue;
                }
                else printf("존재하지 않는 명령입니다.\n");
            }
            if(menu == 1){
                break;
            }
        }
    }
    return 0;
}