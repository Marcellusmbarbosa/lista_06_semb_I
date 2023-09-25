#include <stdio.h>

typedef struct hm {
	int horas;
	int minutos;
} t_hm;

t_hm converter_minutos(int total_minutos) {
	t_hm tempo;
	tempo.horas = total_minutos / 60;
	tempo.minutos = total_minutos % 60;
	return tempo;
}

int main() {
	int minutos;
	printf("Insira o valor em minutos: ");
	scanf("%d", &minutos);
	t_hm resultado = converter_minutos(minutos);
	printf("%d minutos equivalem a %d horas e %d minutos\n", minutos, resultado.horas, resultado.minutos);
	return 0;
}