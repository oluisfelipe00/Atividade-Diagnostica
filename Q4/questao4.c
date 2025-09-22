#include <stdio.h>

int main() {
    float preco_original, percentual_desconto, preco_final;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco_original);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentual_desconto);

    preco_final = preco_original - (preco_original * percentual_desconto / 100);

    printf("O preço final com desconto é: %.2f\n", preco_final);

    return 0;
}
