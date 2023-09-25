#include <stdio.h>

union int_or_float {
	int i;
	float f;
};

int main() {
    union int_or_float seq[100];
    int n, i, sum = 0;
    float product = 1.0;
    char type;

    printf("Digite o número de elementos na sequência (1 ≤ n ≤ 100): ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Digite 'i' para int ou 'f' para float: ");
        scanf("%c", &type);
        getchar();

        if (type == 'i') {
            printf("Digite um número int: ");
            scanf("%d", &seq[i].i);
            getchar();
            sum += seq[i].i;
        } else if (type == 'f') {
            printf("Digite um número float: ");
            scanf("%f", &seq[i].f);
            getchar(); // Limpa o buffer do teclado
            product *= seq[i].f;
        }
    }

    printf("A soma de todos os números int é: %d\n", sum);
    printf("O produto de todos os números float é: %.2f\n", product);

    return 0;
}
