#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoi,ano,total;

    printf("Informe seu ano de nascimento: ");
    scanf("%d",&anoi);
    printf("Informe a ano futuro: ");
    scanf("%d",&ano);

    total = ano - anoi;

    printf("Sua idade nesse ano eh %d",total);
    return 0;
}
