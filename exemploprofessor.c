#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

const double FATOR_ECONOMIA_ALCOOL = 0.70;

double ler_preco_valido(const char* nome_combustivel) {
    char buffer[50];
    double preco = 0.0;
    int entrada_valida = 0;
    do {
        printf("Digite o valor do litro do %s: R$ ", nome_combustivel);
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            preco = strtod(buffer, NULL);
            if (preco > 0) {
                entrada_valida = 1; 
            } else {
                printf("Valor inválido. Por favor, digite um número positivo.\n");
            }
        }
    } while (!entrada_valida);

    return preco;
}

int main(void) { 
	setlocale(LC_ALL, "Portuguese");

	printf("--- Calculadora Álcool x Gasolina ---\n\n");


	double preco_alcool = ler_preco_valido("álcool");
	double preco_gasolina = ler_preco_valido("gasolina");


	double limite_alcool = preco_gasolina * FATOR_ECONOMIA_ALCOOL;

	printf("\n----------------------------------------\n");
	printf("Preço do Álcool: R$ %.2f\n", preco_alcool);
	printf("Preço da Gasolina: R$ %.2f\n", preco_gasolina);

	printf("O álcool é vantajoso se custar até: R$ %.2f\n", limite_alcool);
	printf("----------------------------------------\n\n");

	if (preco_alcool <= limite_alcool) {
		printf("Resultado: Abasteça com ÁLCOOL.\n");
	} else {
		printf("Resultado: Abasteça com GASOLINA.\n");
	}

    printf("\nPressione a tecla enter para encerrar...");

    while(getchar() != '\n');
    getchar();

	return 0;
}
