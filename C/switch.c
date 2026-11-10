#include <stdio.h>

int parcela(){
	int dias, o = 1;
	float valor;
	
	printf("digite o valor da parcela:\n");
	scanf(" %f", &valor);
	
	while(o == 1){
	printf("digite quantas parcelas tem que pagar:\n2 - 53,1/100 do valor por parcela\n3 - 35/100 do valor por parcela\n4 - 28/100 do valor por parcela\n5 - 27/100 do valor por parcela\n");
	scanf(" %d", &dias);
		
		
		switch(dias){
			case 2:
				valor = (valor * 0.531);
				printf("o valor de cada parcela sera:\n%.2f\ncom o total sendo: %.2f", valor, valor * 2);
				o = 0;
				break;
			case 3:
				valor = (valor * 0.35);
				printf("o valor de cada parcela sera:\n%.2\ncom o total sendo: %.2f", valor, valor * 3);
				o = 0;
				break;
			case 4:
				valor = (valor * 0.28);
				printf("o valor de cada parcela sera:\n%.2f\ncom o total sendo: %.2f", valor, valor * 4);
				o = 0;
				break;
			case 5:
				valor = (valor * 0.27);
				printf("o valor de cada parcela sera:\n%.2f\ncom o valor total sendo: %.2f", valor, valor * 5);
				o = 0;
				break;
			default:
				printf("por favor, escolhar uma das opções acima...\n\n");
				break;
	}
}
}

void main(){
	int a, i = 1;
	
	while(i == 1){
		printf("escolhar uma opcao:\n1 - calcular parcela\n\n");
		scanf(" %d", &a);
		switch(a){
			case 1:
				parcela();
				i = 0;
			break;
			default:
				printf("escolha uma opcao apresentada\n\n");
			break;
		}
		
	}
}
