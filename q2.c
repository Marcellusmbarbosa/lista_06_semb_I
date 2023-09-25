#include <stdio.h>

// Definição da struct Data
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Função para verificar se um ano é bissexto
int ehBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 100 != 0 && ano % 4 == 0);
}

// Função para obter o número de dias em um mês
int diasNoMes(int mes, int ano) {
    if (mes == 2) {
        return ehBissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Função para calcular a diferença entre duas datas
int diferencaEntreDatas(Data d1, Data d2) {
    int totalDias = 0;

    // Primeiro, normalizamos as datas para que d1 seja a data mais antiga e d2 a mais recente
    if (d1.ano > d2.ano || (d1.ano == d2.ano && d1.mes > d2.mes) || (d1.ano == d2.ano && d1.mes == d2.mes && d1.dia > d2.dia)) {
        Data temp = d1;
        d1 = d2;
        d2 = temp;
    }

    // Agora, calculamos a diferença de dias
    while (d1.dia != d2.dia || d1.mes != d2.mes || d1.ano != d2.ano) {
        d1.dia++;
        totalDias++;

        if (d1.dia > diasNoMes(d1.mes, d1.ano)) {
            d1.dia = 1;
            d1.mes++;
        }

        if (d1.mes > 12) {
            d1.mes = 1;
            d1.ano++;
        }
    }

    return totalDias;
}

int main() {
    Data d1 = {1, 1, 2000};
    Data d2 = {1, 1, 2023};

    printf("Diferença entre as datas: %d dias\n", diferencaEntreDatas(d1, d2));

    return 0;
}