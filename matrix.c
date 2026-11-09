#include<stdio.h>

int main(){
	int i, j, f, mes;
	float valor, valormes, matriz[5][3] = {{1, 1, 1}, {2, 0.530, 0.532}, {3, 0.363, 0.365}, {4, 0.28, 0.282}, {5, 0.230, 0.232}};
	char a;
	printf("MAtriz");
	/*for(i=0;i<5;i++){
		for(j=0;j<2;j++){
			printf("MA[%d][%d]:\n", i, j);
			scanf(" %f", &matriz[i][j]);
		}
	}
	/*for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			printf("Linha %d, coluna %d, valor: %d\n", i, j, matriz[i][j]);
		}
	}*/
	
	//printf("digite o valor da compra: \nR$:");
	//scanf(" %f", &valor);
	valor = 1000;
	printf("digite o numero de meses:\n");
	scanf(" %d", &mes);
	printf ("tem entrada?(s = sim, n = nao)\n");
	scanf(" %c", &a);
	
	if(a == 's'){
		f = 1;
	valormes = valor*matriz[mes-1][f];
	}else{
		f = 2;
		valormes = valor*matriz[mes-1][f];
	}
	printf("%f", matriz[mes-1][f]);
	printf("\n\n o valor a pagar por mes eh: %.2f", valormes);
	
	
	
	
	return 0;
}
