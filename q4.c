#include <stdio.h>
#include <string.h>

// Definindo a estrutura para armazenar os dados do empregado (a)
typedef struct {
    char nome[50];
    char sobrenome[50];
    char dataNascimento[10];
    char cpf[11];
    char dataAdmissao[10];
    double salario;
} Empregado;

// Definindo um vetor de empregados (a)
Empregado empregados[100];

// Função de busca por CPF (b)
int buscaPorCPF(char* cpf) {
    for(int i = 0; i < 100; i++) {
        if(strcmp(empregados[i].cpf, cpf) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    // Solicitando ao usuário para inserir os dados do empregado
    printf("Digite o nome do empregado: ");
    scanf("%s", empregados[0].nome);
    printf("Digite o sobrenome do empregado: ");
    scanf("%s", empregados[0].sobrenome);
    printf("Digite a data de nascimento do empregado (DD/MM/AAAA): ");
    scanf("%s", empregados[0].dataNascimento);
    printf("Digite o CPF do empregado: ");
    scanf("%s", empregados[0].cpf);
    printf("Digite a data de admissão do empregado (DD/MM/AAAA): ");
    scanf("%s", empregados[0].dataAdmissao);
    printf("Digite o salário do empregado: ");
    scanf("%lf", &empregados[0].salario);

    // Exemplo de uso da função de busca
    char cpfBusca[11];
    printf("Digite o CPF do empregado que deseja buscar: ");
    scanf("%s", cpfBusca);
    int indice = buscaPorCPF(cpfBusca);
    if(indice != -1) {
        printf("Empregado encontrado: %s %s\n", empregados[indice].nome, empregados[indice].sobrenome);
    } else {
        printf("Empregado não encontrado.\n");
    }
    return 0;
}
