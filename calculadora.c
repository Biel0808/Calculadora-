#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int n1,n2,operacao,res;
	float resdiv;
	
	printf("**Menu Calculadora*******");
	printf("\n 1� Soma");
	printf("\n 2� Subtra��o");
	printf("\n 3� Multiplica��o");
	printf("\n 4� Divis�o");
	printf("\n************************");
	
	printf("\n Digite a op��o: ");
	scanf("%d",&operacao);
	
	if (operacao == 1 || operacao == 2 ||operacao == 3|| operacao == 4){
		printf("\n Op��o v�lida");
		printf("\n Digite o valor do primeiro n�mero: ");
		scanf("%d",&n1);
		printf("\n Digite o valor do segundo n�mero: ");
		scanf("%d",&n2);
		
		if(operacao == 1){
			res=n1+n2;
			printf("\n A soma de %d + %d � igual a %d",n1,n2,res);
		}else if (operacao == 2){
			res=n1-n2;
			printf("\n A subtra��o de %d - %d � igual a %d",n1,n2,res);
		}else if(operacao==3){
			res=n1*n2;
			printf("\n A multipliaca��o de %d * %d � igual a %d",n1,n2,res);
		}else{
			resdiv=n1/n2;
				printf("\n A divis�o de %d / %d � igual a %f",n1,n2,resdiv);
		}
	}else{
		printf("\n Op��o Inv�lida");
	}

}
