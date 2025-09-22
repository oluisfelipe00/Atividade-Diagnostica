#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicitar o valor em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Converter para Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Exibir o resultado
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
