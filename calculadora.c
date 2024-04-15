#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int n1,n2,operacao,res;
	float resdiv;
	
	printf("**Menu Calculadora*******");
	printf("\n 1° Soma");
	printf("\n 2° Subtração");
	printf("\n 3° Multiplicação");
	printf("\n 4° Divisão");
	printf("\n************************");
	
	printf("\n Digite a opção: ");
	scanf("%d",&operacao);
	
	if (operacao == 1 || operacao == 2 ||operacao == 3|| operacao == 4){
		printf("\n Opção válida");
		printf("\n Digite o valor do primeiro número: ");
		scanf("%d",&n1);
		printf("\n Digite o valor do segundo número: ");
		scanf("%d",&n2);
		
		if(operacao == 1){
			res=n1+n2;
			printf("\n A soma de %d + %d é igual a %d",n1,n2,res);
		}else if (operacao == 2){
			res=n1-n2;
			printf("\n A subtração de %d - %d é igual a %d",n1,n2,res);
		}else if(operacao==3){
			res=n1*n2;
			printf("\n A multipliacação de %d * %d é igual a %d",n1,n2,res);
		}else{
			resdiv=n1/n2;
				printf("\n A divisão de %d / %d é igual a %f",n1,n2,resdiv);
		}
	}else{
		printf("\n Opção Inválida");
	}

}
