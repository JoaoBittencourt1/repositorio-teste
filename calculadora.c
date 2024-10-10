#include <stdio.h>
#include <stdlib.h>

void calculadora(double *valor,double *valor2, int opcao){
	double resultado;
	printf ("digite os valores da operacao:\n");
	scanf("%lf\n %lf", valor, valor2);
	printf ("digite se voce quer fazer multiplicao(1), divisao(2), adicao(3), ou subitracao(4)\n");
	scanf("%d",&opcao);
	 
	switch(opcao){
		case 1:
		
			resultado = (*valor) * (*valor2);
			printf ("resultado: %lf", resultado);
			break;
			
		case 2:
			
		
			resultado = (*valor) / (*valor2);
			printf ("resultado: %lf", resultado);
			break;
			
		case 3:
	
		resultado = (*valor) + (*valor2);
			printf ("resultado: %lf", resultado);
		
			break;
			
		case 4:
		
		
		resultado = (*valor) - (*valor2);
			printf ("resultado: %lf", resultado);
		
			break;	
			default:
			printf ("error");
			break;	
			
			
	}
}


int main (){
	
	double a,b;
	int c;
	
	calculadora(&a,&b,c);

	return 0;
}
