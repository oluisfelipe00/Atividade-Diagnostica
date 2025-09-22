#include <stdio.h>

int main() {
    float salario_base, valor_hora_extra, horas_extras, salario_total;

    printf("Digite o valor do salário base: ");
    scanf("%f", &salario_base);

    printf("Digite o valor da hora extra: ");
    scanf("%f", &valor_hora_extra);

    printf("Digite a quantidade de horas extras: ");
    scanf("%f", &horas_extras);

    salario_total = salario_base + (valor_hora_extra * horas_extras);

    printf("O valor total a ser recebido é: %.2f\n", salario_total);

    return 0;
}

