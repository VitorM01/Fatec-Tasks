#include<stdio.h>
void main(){
	
	int X, A, B;
	
	printf("informe uma variavel para A:\n");
	scanf("%i", &A);
	
	printf("informe uma variavel para B:\n");
	scanf("%i", &B);
	
	if(A > B){
		X=A;
		A=B;
		B=X;
		
		printf("ordem: %d, %d", A, B);
	}
	else{
		printf("ordem: %d, %d", B, A);
	}
}
