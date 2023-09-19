/* Numa turma de curso de inglês com dez alunos, dentre eles Joana, quatro serão escolhidos para ganhar um livro. 
Qual a probabilidade de Joana ser sorteada? */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));  // Inicializa o gerador de números aleatórios com o tempo atual

    // Número total de alunos na turma
    const int total_alunos = 10;

    // Número de alunos a serem escolhidos para ganhar um livro
    const int alunos_a_escolher = 4;

    // Número de alunos que incluem Joana
    const int alunos_com_joana = 1;

    // Variável para contar o número de vezes que Joana é sorteada
    int joana_contador = 0;

    // Número total de simulações
    unsigned n = 1000000;

    // Loop para realizar as simulações
    for (unsigned i = 0; i < n; ++i) {
        // Escolha aleatória dos alunos para ganhar um livro
        int alunos_ganhadores = rand() % total_alunos + 1;  // De 1 a 10 alunos

        // Verifica se Joana está entre os alunos ganhadores
        if (alunos_ganhadores <= alunos_a_escolher && alunos_ganhadores <= alunos_com_joana) {
            joana_contador++;
        }
    }

    // Calcula a probabilidade de Joana ser sorteada
    float probabilidade_joana = (float)joana_contador / n;

    // Exibe a probabilidade de Joana ser sorteada
    std::cout << "Probabilidade de Joana ser sorteada: " << probabilidade_joana << std::endl;

    return 0;
}
