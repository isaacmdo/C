#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int binario;
	int modulo;
	int indice=0;
	int decimal = 0;
	char opc;
	int number;
    
    printf("\n===========================================================\n");
    printf("\nBEM-VINDO AO CONVERSOR DE BASES NUMERICAS\n\n");
    printf("QUAL OPERACAO DESEJA REALIZAR? \n\n");
    printf("[ 1 ] BINARIO     ->  DECIMAL\n");
    printf("[ 2 ] DECIMAL     ->  BINARIO\n");
    printf("[ 0 ] SAIR\n");
    cin >> number;
    printf("\n===========================================================\n");
    
    
    switch(number) {
        case 0 :
            printf("CALCULADORA ENCERRADA!\n");
            exit(0);
        case 1 : 
            printf("BINARIO: ");
            goto inicio;
            break;
        case 2 : 
            printf("DECIMAL: ");
            goto decimal;
            break;
            
    }
	
	
	
	inicio:	
	cout << "\nEntre com o numero binario: ";
	cin >> binario;
	
	while(binario != 0){
		modulo = binario % 10;
		decimal += modulo * pow(2,indice);
		binario /= 10;
		indice++;
	}
	cout << "O numero decimal eh: " << decimal;
		
	

  cout << "\nDeseja calcular novamente? [s/n]\n";
	cin >> opc;
	
	switch("n" or "N") {
        case 0 :
            printf("CALCULADORA ENCERRADA!\n");
            exit(0);
        case 1 : 
            printf("LEGAL TENTE MAIS UM NUMERO ! :) ");
            main();
            break;
    }
	
	
	
	
	
	
	decimal:	
	int num;
    int bin[7];
    int aux;

    printf("\nEntre com o numero decimal: ");
    scanf("%d", &num);

    for (aux = 7; aux >= 0; aux--) {
        if (num % 2 == 0) {
            bin[aux] = 0;
            num = num / 2;
        }
        else {
            bin[aux] = 1;
            num = num / 2;
        }
    }

    for (aux = 0; aux <= 7; aux++) {
        printf("%d", bin[aux]);
    }
    
    cout << "\nDeseja calcular novamente? [s/n]\n";
	cin >> opc;
	
	switch("n" or "N") {
        case 0 :
            printf("CALCULADORA ENCERRADA!\n");
            exit(0);
        case 1 : 
            printf("LEGAL TENTE MAIS UM NUMERO ! :) ");
            main();
            break;
    }
	
	return 0;
	
}
