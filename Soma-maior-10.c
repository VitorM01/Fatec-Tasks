#include<stdio.h>

void main(){
	int A, B, X, opc;
	opc = 1;
	while(opc == 1){
	printf("Digite valor de A:\n");
	scanf(" %d", &A);
	
	printf("Digite valor de B:\n");
	scanf(" %d", &B);

	X = A + B;
	
	if(X > 10){
		printf("A soma eh maior que 10! (%d)\n", X);
	} else{
		printf("a soma(%d), nao eh maior que 10\n", X);
	}
	
	printf("quer fazer mais uma soma?(1 sim, 0 nao)\n");
	scanf(" %d", &opc);
}
	printf("\nobrigado!");
}
