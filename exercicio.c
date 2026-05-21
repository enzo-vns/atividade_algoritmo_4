#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularMedia(float v[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++)
        soma += v[i];
    return soma / n;
}

void inverterVetor(float v1[], float v2[], int n) {
    for (int i = 0; i < n; i++)
        v2[i] = v1[n - 1 - i];
}

void contarParImpar(int v[], int n, int *pares, int *impares) {
    *pares = 0;
    *impares = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0)
            (*pares)++;
        else
            (*impares)++;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n = 10;

    printf("= Exercício 1 =\n");
    float v1[10];
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &v1[i]);
    }
    printf("Média: %.2f\n\n", calcularMedia(v1, n));

    printf("= Exercício 2 =\n");
    float v2[10], v2_inv[10];
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &v2[i]);
    }
    inverterVetor(v2, v2_inv, n);
    printf("Vetor original:  ");
    for (int i = 0; i < n; i++) printf("%.0f ", v2[i]);
    printf("\nVetor invertido: ");
    for (int i = 0; i < n; i++) printf("%.0f ", v2_inv[i]);
    printf("\n\n");

    printf("= Exercício 3 =\n");
    int v3[10], pares, impares;
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v3[i]);
    }
    contarParImpar(v3, n, &pares, &impares);
    printf("Pares: %d | Ímpares: %d\n\n", pares, impares);

    system("pause");
    return 0;
}
