#include <stdio.h>
int main(){
    long int dodo, gogo;
    long int total, deposit, change, rest, menu;
    long int w500, w100, w50, w10;
    long int cnt_dodo, cnt_gogo;
    int menu_a = 0;
    while(1){
        menu_a = 0;
        printf("�ǶǸ� 70��, �ǲǹ� 30��. �� ���� ����� �Է�: ");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);
        dodo = 70*cnt_dodo;
        gogo = 30*cnt_gogo;
        total = dodo+gogo;
        printf("������ �ݾ� �Է�: ");
        scanf("%d",&deposit);
        if(deposit > total){
            change = deposit - total;
            w500 = change / 500;
            w100 = change % 500 / 100;
            w50 = change % 100 / 50;
            w10 = change % 50 / 10;
            printf("�ǶǸ� ��ü �ݾ�: %d\n�ǲǹ� ��ü �ݾ�: %d\n�Ž�����: %d\n==========[ �Ž����� ���� �ּ� ���� ]==========\n500��: %d\n100��: %d\n50��: %d\n10��: %d",dodo,gogo,change,w500,w100,w50,w10);
            printf("\n==============================\n\n");
            while(menu_a == 0){
                printf("[0] ����ϱ�\n[1] ������");
                scanf("%d",&menu);
                if(menu == 1){
                    menu_a=1;
                }
                else if(menu == 0){
                    menu_a=1;
                    continue;
                }
                else printf("�������� �ʴ� ����Դϴ�.\n");
            }
            if(menu == 1){
                break;
            }
        }
        else{
            printf("�ݾ� ����.\n");
            printf("==============================\n\n");
            while(menu_a == 0){
                printf("[0] ����ϱ�\n[1] ������");
                scanf("%d",&menu);
                if(menu == 1){
                    menu_a=1;
                }
                else if(menu == 0){
                    menu_a=1;
                    continue;
                }
                else printf("�������� �ʴ� ����Դϴ�.\n");
            }
            if(menu == 1){
                break;
            }
        }
    }
    return 0;
}