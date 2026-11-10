#include<stdio.h>

void main(){
	int idade;
	
	printf("Qual sua idade?\n");
	scanf("%d", &idade);
	
	if(idade > 70){
		printf("velho! Gaga!");
	}
	else if(idade >=21 && idade < 70){
		printf("wow, adulto!");
	}
	else if(idade < 21){
		printf("Bebe!, gugu dada!");
	}
}
