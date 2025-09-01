int main(void) {

    float peso, altura, imc;
    printf("Digite o seu peso em kg (ex: 70.5): ");
    scanf("%f", &peso);
    printf("\n Qual sua altura:(ex: 1.75): ");
    scanf("%f", &altura);
    if (peso <= 0 || altura <= 0) {
        printf("Pesos e alturas com valores inválidos: ");
    }
    imc = peso/pow(altura, 2);
    printf("\n Seu IMC é: %.2f", imc);
    printf("Classificação: ");
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Obesidade Grau I\n");
    } else if (imc < 40.0) {
        printf("Obesidade Grau II (severa)\n");
    } else {
        printf("Obesidade Grau III (mórbida)\n");
    }

    return 0;
}