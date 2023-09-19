/* Numa turma de curso de inglês com dez alunos, dentre eles Joana, quatro serão escolhidos para ganhar um livro. 
Qual a probabilidade de Joana ser sorteada? */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));  // inicializa o gerador de números aleatórios com o tempo atual

    // número total de alunos na turma
    const int total_alunos = 10;

    // número de alunos a serem escolhidos para ganhar um livro
    const int alunos_a_escolher = 4;

    // número de alunos que incluem Joana
    const int alunos_com_joana = 1;

    // variável para contar o número de vezes que Joana é sorteada
    int joana_contador = 0;

    // número total de simulações
    unsigned n = 1000000;

    // loop para realizar as simulações
    for (unsigned i = 0; i < n; ++i) {
        // escolha aleatória dos alunos para ganhar um livro
        int alunos_ganhadores = rand() % total_alunos + 1;  // De 1 a 10 alunos

        // verifica se Joana está entre os alunos ganhadores
        if (alunos_ganhadores <= alunos_a_escolher && alunos_ganhadores <= alunos_com_joana) {
            joana_contador++;
        }
    }

    // calcula a probabilidade de Joana ser sorteada
    float probabilidade_joana = (float)joana_contador / n;

    // exibe a probabilidade de Joana ser sorteada
    std::cout << "Probabilidade de Joana ser sorteada: " << probabilidade_joana << std::endl;

    return 0;
}
