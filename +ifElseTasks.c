#include <stdio.h>
#include <conio.h>
void verificarP(){
	int numero;
	printf("digite o numero para ver se eh falso ou positivo:\n");
	scanf(" %d", &numero);
	if(numero >=0){
		printf("o numero %d eh positivo!", numero);
	}
	else{
		printf("eh negativo, troxa");
	}
}

void maiorDez(){
	int numero;
	printf("digite o numero para ver se eh maior que dez:\n");
	scanf(" %d", &numero);
	if(numero >10){
		printf("o numero %d eh maior!", numero);
	}
	else if(numero == 10){
		printf("isso eh o 10");
	}
	else{
		printf("nao, nao eh");
	}
}

void media(){
	float nota1, nota2;
	
	printf("digite a primeira nota:\n");
	scanf(" %f", &nota1);
	
	printf("digite a segunda nota:\n");
	scanf(" %f", &nota2);
	float media = (nota1 + nota2) / 2;
	
	if(media >= 6){
		printf("boa, tirou %.2f, passou", media);
	} else{
		printf("tirou %.2f, decpcao...", media);
	}
}

void dobro(){
	int numero;
	
	printf("digite numero:\n");
	scanf(" %d", &numero);
	
	if(numero > 10){
		printf("%d", numero*2);
	}else{
		printf("%d", numero*3);
	}
}
void par(){
	int numero;
	
	printf("digite o numero:\n");
	scanf(" %d", &numero);
	
	if(numero % 2 == 0){
		printf("o numero %d eh par", numero);
	}else{
		printf("impar solitario");
	}
}

void idade(){
	int ano, anoAtual;
	
	printf("digite o ano em que nasceu\n");
	scanf(" %d", &ano);
	
	printf("digite o ano atual\n");
	scanf(" %d", &anoAtual);
	
	if((anoAtual - ano) >= 18){
		printf("tem %d, pode votar e tirar carta!", anoAtual - ano);
	}
	else if((anoAtual - ano) >= 16){
		printf("voce tem %d anos e pode votar\n", anoAtual -ano);
	}else{
		printf("voce eh bebe, tem %d, bebe nao vota\n", anoAtual-ano);
	}
}

void semana(){
	int dia;
	printf("digite um numero representando o dia da semana(1 a 7)\n");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("domingo\n");
			break;
		case 2:
			printf("segunda\n");
			break;
		case 3:
			printf("terca\n");
			break;
		case 4:
			printf("quarta\n");
			break;
		case 5:
			printf("quinta\n");
			break;
		case 6:
			printf("sexta\n");
			break;
		case 7:
			printf("sabado\n");
		break;
		
		default:
			printf("escreve um a sete!!!\n");
	}
}

void reajuste(){
	float valor;
	int d;
	
	printf("digite o valor do produto:\n");
	scanf(" %f", &valor);
	
	printf("escolha um reajuste: 1: 15%, 2: 20%, 3: 30%\n");
	scanf(" %d", &d);
	
	if(d == 1){
		printf("o valor %.2f, foi reajustado para: %.2f\n", valor, valor+valor*0.15);
	}else if(d == 2){
		printf("o valor %.2f, foi reajustado para: %.2f\n", valor, valor+valor*0.20);
	}else if(d == 3){
		printf("o valor %.2f, foi reajustado para: %.2f\n", valor, valor+valor*0.30);
	}else{
		printf("era pra escolhe um dos 3 reajustes\n");
	}
}

void main(){
	int f, d;
	f = 1;
	
	while(f == 1){
		printf("escolha uma das opcoes:\n1 ehpositivo\n2: ehmaiorquedez\n3: media\n4: dobraroutriplar\n5: par ou impar\n6: pode votar\n7: dia da semana\n8: reajuste\n");
		scanf(" %d", &d);
		
		switch(d){
			case 1:
				verificarP();
				break;
			case 2:
				maiorDez();
				break;
			case 3:
				media();
				break;
			case 4:
				dobro();
				break;
			case 5:
				par();
				break;
			case 6:
				idade();
				break;
			case 7:
				semana();
				break;
			case 8:
				reajuste();
				break;
			default:
				printf("escolhe uma opcao!!");
				break;
		}
		
		printf("\n\ndeseja usar de novo o programa?(1 = sim)\n");
		scanf(" %d", &f);	
		system("cls");
	}
	printf("\n\nobrigado por usar o programa!!");
}
