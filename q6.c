#include <stdio.h>

typedef struct{
	char nome[80];
	float nota;
} t_aluno;

// (a) Declaração de um vetor do tipo t_aluno
t_aluno alunos[2]; // Declara um vetor de 100 alunos

// (b) Função para ler o nome e a nota de cada aluno
void ler_alunos(t_aluno *alunos, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 80, stdin);
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota);
        getchar(); // Limpa o buffer do teclado
    }
}

// (c) Função para encontrar a maior nota de aluno no vetor e imprimir o nome e a nota
void maior_nota(t_aluno *alunos, int n) {
    int i, max_i = 0;
    float max_nota = alunos[0].nota;
    for (i = 1; i < n; i++) {
        if (alunos[i].nota > max_nota) {
            max_nota = alunos[i].nota;
            max_i = i;
        }
    }
    printf("Aluno com a maior nota:\n");
    printf("Nome: %s", alunos[max_i].nome);
    printf("Nota: %.2f\n", alunos[max_i].nota);
}

int main() {
    int n = 2;
    ler_alunos(alunos, n);
    maior_nota(alunos, n);
    return 0;
}
