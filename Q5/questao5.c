#include <stdio.h>

int main() {
    int maquinas = 8, maquinas_novas = 10;
    int pecas = 120, horas = 5;
    int pecas_novas;

    pecas_novas = (pecas * maquinas_novas) / maquinas;

    printf("Se 10 máquinas trabalhassem, seriam produzidas %d peças em %d horas.\n", pecas_novas, horas);

    return 0;
}
