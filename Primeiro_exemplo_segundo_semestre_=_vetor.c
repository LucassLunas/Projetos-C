/*Exemplo de vetor para digitar números pares, e mostrar todos os pares que
foram digitados nas 5 posições do vetor, números impares são ignorados */
#include <stdio.h>
int main (void){
	int pos, vet [5];
	//1ºInício, 2ºcondição de parada, 3º passo
	for (pos = 0; pos <5; pos++) {
		do{
			printf("Digite o %d par:", pos+1);
			scanf("%d", & vet[pos]);
			}while ((vet[pos]%2)!=0);
		}
	
	for(pos=0; pos<5; pos++){
		printf("pos %d=%d\n", pos+1, vet[pos]);
	}
	return 0;
}
