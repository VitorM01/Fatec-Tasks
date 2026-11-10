#include<stdio.h>;
int main(){
	int MA[3][3], MB[3][3], MR[3][3];
	int i, j;
	
	printf("valores para mtriz A:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite um numero para a %d %d:\n", i+1, j+1);
			scanf(" %d", &MA[i][j]);
		}
	}
	printf("valores para mtriz B:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite um numero para a %d %d:\n", i+1, j+1);
			scanf(" %d", &MB[i][j]);
		}
	}
	printf("valores para mtriz A:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			MR[i][j] = MA[i][j] + MB[i][j];
			printf("MR [%d][%d] = %d\n", i+1, j+1, MR[i][j]);
		}
	}
	
	return 0;
}
