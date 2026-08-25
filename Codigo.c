#include <stdio.h>

/*to fazendo no trabalho, entao vou usar o bloco de notas pra nao ter que baixar nenhuma ide*/

int media(void){ 
	float m1, m2, m3;

	printf("\nDigite a primeira nota:");
	scanf("%f", &m1);

	printf("\nDigite a segunda nota:");
	scanf("%f", &m2);

	printf("\nDigite a terceira nota:");
	scanf("%f", &m3);

	float media = (m1 + m2 + m3) / 3;

	printf("\nA media de suas notas eh: %.2f\n", media);
}

int quadrado(void){
	float largura, altura;

	printf("\ndigite a largura do quadrado: ");
	scanf("%f", &largura);

	printf("\ndigite a altura do quadrado: ");
	scanf("%f", &altura);

	printf("A area do quadrado eh: %.2f \n", altura*largura);
}

int triangulo(void){
	float largura, altura;

	printf("\ndigite a largura do triangulo: ");
	scanf("%f", &largura);

	printf("\ndigite a altura do triangulo: ");
	scanf("%f", &altura);

	printf("A area do triangulo eh: %.2f \n", (altura*largura)/2);
}

int circulo(void){
	float raio;

	printf("digite o raio do circulo: ");
	scanf("%f", &raio);

	printf("A area do circulo eh: %.2f \n", 3.14*(raio*raio));
}

int prestacao(void){
	float taxa, valor;
	int tempo;
	
	printf("\ndigite o valor da prestacao(em R$): ");
	scanf("%f", &valor);

	printf("\ndigite a taxa da prestacao: ");
	scanf("%f", &taxa);

	printf("\ndigite o tempo passado da prestacao(em dias): ");
	scanf("%d", &tempo);
	
	float total = valor + (valor * (taxa / 100)  * tempo);

	printf("\nO valor da prestação atual eh: R$:%.2f", total);
}

int volume(void){
	float largura, altura, comprimento;

	printf("\ndigite a largura do retangulo: ");
	scanf("%f", &largura);

	printf("\ndigite a altura do retangulo: ");
	scanf("%f", &altura);

	printf("\ndigite o comprimento do retangulo: ");
	scanf("%f", &comprimento);
	
	float volume = comprimento * altura * largura;

	printf("O volume do retangulo eh: %.2f", volume);
}

int elevacao(void){
	int n1, n2, n3;

	printf("\ndigite o primeiro valor: ");
	scanf("%d", &n1);

	printf("\ndigite o segundo: ");
	scanf("%d", &n2);

	printf("\ndigite o terceiro numero: ");
	scanf("%d", &n3);

	printf("a soma dos quadrados dos tres numeros eh: %d \n", n1*n1+n2*n2+n3*n3);
}

int ponderada(void){
	float n1, peso1, n2, peso2, n3, peso3;

	printf("\ndigite a primeira nota: ");
	scanf("%f", &n1);
	printf("\ndigite o peso da primeira nota: ");
	scanf("%f", &peso1);
	
	printf("\ndigite a segunda nota: ");
	scanf("%f", &n2);
	printf("\ndigite o peso da segunda nota: ");
	scanf("%f", &peso2);

	printf("\ndigite a terceira nota: ");
	scanf("%f", &n3);
	printf("\ndigite o peso da terceira nota: ");
	scanf("%f", &peso3);

	float media = ((n1 * peso1) + (n2 * peso2) + (n3 * peso3)) / (peso1 + peso2 + peso3);

	printf("\na media ponderada das notas eh: %.2f", media);
}

int salario(void){
	float salario;

	printf("\ndigite o seu salario: ");
	scanf("%f", &salario);

	float atual = salario*0.25;

	printf("\no salario apos reajuste eh: %.2f", atual);
}



/*eu pensei em uma forma de agilizar eh criar varias funcoes e usar o switch para chamar elas entao pesquisei no google como fazer isso no C*/
//tambem como forma de me desafiar a ir alem, ja que eu tenho conhecimento da linguagem

int main(void){
	int i = 1;
	//vou usar while, porque ai parece que eh um sistema de escolha, fica mais legal assim
	while(i == 1){
		int escolha;

		printf("Ola, o que deseja hoje?\n--------------\n1- calcular media\n--------------\n2- cal area de quadrado\n--------------\n3- cal area de triangulo\n--------------\n4- cal area de circulo\n--------------\n5- valor de prestacao\n--------------\n6- volume de retangulo\n--------------\n7- soma de numeros ao quadrado\n--------------\n8- media ponderada\n--------------\n9- reajuste de salario\n--------------\n\n");
		scanf("%d", &escolha);

		switch(escolha){
		case 1: media();
			break;
		case 2: quadrado();
			break;
		case 3: triangulo();
			break;
		case 4: circulo();
			break;
		case 5: prestacao();
			break;
		case 6: volume();
			break;
		case 7: elevacao();
			break;
		case 8: ponderada();
			break;
		case 9: salario();
			break;
		default: printf("escolha alguma das opcoes!");
		}
	
	printf("\n-------------------------------\ndeseja continuar usando o progama?(1 = sim, 0 = nao)\n-------------------------------\n");
	scanf("%d", &i);
	} //to testanto o progama no onlineGDB pra ver se ta funcionando, eu usei um pouco a w3school para ver como usava os comandos no C
	printf("Obrigado por usar o progama!");

}
