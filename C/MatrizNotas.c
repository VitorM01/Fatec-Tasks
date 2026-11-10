#include<stdio.h>;
int main(){
	int notas[3][5];
	int i, j;
	char nome;
	
	printf("Digite o nome do Aluno:\n");
	scanf(" %s", &nome);
	
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite a nota da materia %d %d:\n", i+1, j+1);
			scanf(" %d", &notas[i][j]);
		}
	}
	printf("Notas:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("%c:\nMateria: [%d][%d] Nota: %d\n", nome, i+1, j+1, notas[i][j]);
		}
	}
	
	return 0;
}
