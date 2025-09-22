#include <stdio.h>

int main() {
    float raio, area, perimetro;
    float pi = 3.1415;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;          
    perimetro = 2 * pi * raio;

    printf("Área do círculo: %.2f\n", area);
    printf("Perímetro do círculo: %.2f\n", perimetro);

    return 0;
}
