#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char num [50];
    char caracter;
    int i, j, tamanho_num;

    printf("Digite um numero: ");
    scanf("%s", num);

    tamanho_num = strlen(num);

    printf("O tamanho do numero e: %d \n", tamanho_num);


    for (i = 0, j = tamanho_num - 1; i < j; i++, j--){
        caracter = num[i];
        num[i] = num[j];
        num[j] = caracter;
    }

    printf("%s", num);

    getch();

    return 0;
}
