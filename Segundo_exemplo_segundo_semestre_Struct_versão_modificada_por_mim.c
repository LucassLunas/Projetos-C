/*Struct � uma poderosa ferramenta para agrupar dados de tipos diferentes em uma
�nica estrutura. 
Com struct podemos criar novos tipos de vari�veis!
Podemos juntar na mesma estrutura um comportamento do tipo int e outro do tipo float.
Por exemplo, podemos criar uma estrutura do tipo Aluno que contenha um compartimento 
do tipo int para guardar o RA, dois compartimentos do tipo float para Adc1 e Adc2
e mais um compartimento do tipo char para a situa��o 'A' de aprovado.*/

/*Declara��o da estrutura:
	struct tipoAluno{
		int ra;
		float n1,n2;
		char situacao;
	};

//Declara��o de uma vari�vel com esta estrutura:
	struct tipoAluno al;
	//Atribui��es de valores para est� vari�vel:
		al.ra= 123;
		al.n1= 7.5;
		al.n2= 9.5;
		al.situacao = 'A';*/
		
//Exemplo:
#include<stdio.h>
struct tipoAluno{
	int ra,al;
	float n1,n2;
	char situacao;
};
int main (void){
	struct tipoAluno al;
	printf ("Digite o ra:");
	scanf ("%d",& al.ra);
	printf("Digite a 1 nota:");
	scanf("%f", & al.n1);
	printf ("Digite a 2 nota:");
	scanf ("%f", & al.n2);
	
	if (((al.n1 + al.n2)/2.0)>5.0){
		printf("Situacao: %\n",al.situacao);
		printf("Parabens voce esta aprovado");
		
	}else{
	
		printf("Situacao: %\n",al.situacao);
		printf("Infelizmente voce esta reprovado");
	}
	
	return 0;
	
}
