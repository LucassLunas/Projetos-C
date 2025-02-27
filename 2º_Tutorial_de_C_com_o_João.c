#include <stdio.h>

struct pessoa {
    int idade;
    char genero;
    char nome[20];
};

int main(void) {
    struct pessoa lucas = {0}; // inicializa com zeros

    printf("Idade: ");
    scanf("%d", &lucas.idade);

    printf("Genero (M/F): ");
    scanf(" %c", &lucas.genero); // nota o espaço antes de %c

    printf("Nome: ");
    scanf("%19s", lucas.nome); // evita buffer overflow

    printf("\n");
    printf("Idade: %d\n", lucas.idade);
    printf("Genero: %c\n", lucas.genero);
    printf("Nome: %s\n", lucas.nome);

    return 0;
}
