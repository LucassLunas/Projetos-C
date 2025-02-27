//Exemplo de programa em C
#include <stdio.h>
int main (void){
	int pri, seg;
	printf ("Digite um valor:");
	scanf ("%d", & pri);
	printf ("Digite outro valor:");
	scanf ("%d", & seg);
	if (pri > seg){
		printf ("O maior foi: %d\n", pri);
	} else{
	    if (seg > pri){
	    	printf ("O maior foi: %d\n", seg);
	    }else{ printf("Sao igauais \n");
	    }
	}
	return 0;
}
