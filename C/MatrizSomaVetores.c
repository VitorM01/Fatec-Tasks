#include<stdio.h>;
int main(){
	int MA[5][5];
	int i, j;
	int soma = 0;
	
	printf("valores para mtriz A:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite um numero para a %d %d:", i+1, j+1);
			scanf(" %d", &MA[i][j]);
			
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d    ", MA[i][j]);
			soma += MA[i][j];
		}
		printf("soma: %d", soma);
		soma = 0;
		
		printf("\n");
	}	

	return 0;
}
