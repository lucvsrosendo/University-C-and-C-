#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Leitura de dia mes e ano
    int dia, mes, ano;
    printf("Digite uma data no formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    //Imprime dia, mes e ano separadamente
    printf("dia %d\n", dia);
    printf("mes %d\n", mes);
    printf("ano %d\n", ano);

    return(0);
}