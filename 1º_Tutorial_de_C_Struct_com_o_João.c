#include<stdio.h>
struct carro{
	int rodas;
	int portas;
	int cadeiras;
	char marca[10];
	float velocimetro;
};

int main(void){
	struct carro carro1;
	
	printf("Digite a marca do carro:");
    scanf("%s",& carro1.marca);
    printf("Digite o numero de rodas:");
    scanf("%d",& carro1.rodas);
    printf("Digite o numero de portas:");
    scanf("%d",& carro1.portas);
    printf("Digite o numero de cadeiras: ");
    scanf("%d",& carro1.cadeiras);
    
	printf("\nDados do carro:\n");
	printf("Marca:%s\n",carro1.marca);
	printf("Rodas:%d\n",carro1.rodas);
	printf("Portas:%d\n",carro1.portas);
	printf("Cadeiras:%d\n",carro1.cadeiras);
	scanf("%s",carro1.marca);
	scanf("%d",& carro1.rodas);
	scanf("%d",& carro1.portas);
	scanf("%d",& carro1.cadeiras);
	
	return 0;
}
