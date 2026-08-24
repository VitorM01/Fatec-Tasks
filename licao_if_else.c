#include<stdio.h>

void main(){
    char sex;
    char op;
    while(op != 'n'){
        printf("Qual seu sexo:\n");
        scanf(" %c", &sex);
        
        if(sex == 'M' || sex == 'm'){
            printf("Voce eh masculino\n");
        }
        else if(sex == 'F' || sex == 'f'){
            printf("voce eh feminino\n");
        }
        else{
            printf("voce eh nenhum\n");
        }
        printf("quer usar o programa de novo?(digite n para parar ou s para continuar)\n");
        scanf(" %c", &op);
    }
    printf("obrigado por usar!");
}
