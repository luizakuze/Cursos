#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/// Questão 7 - Lista Básica (Apresentação)
///
/// \brief Alguns amigos estão em uma lanchonete e há duas travessas na mesa com salgados.
///        A primeira travessa contém 3 pastéis e 5 coxinhas, e a segunda contém 2 coxinhas e 4 pastéis.
///        Se alguém escolher uma das travessas e, em seguida, pegar um salgado ao acaso,
///        qual é a probabilidade de ter pego um pastel?
void Q7 () {
    srand(time(NULL));  // Inicializa o gerador de números aleatórios com o tempo atual

    // Probabilidade de pegar um pastel em cada travessa
    float prob_travessa1 = 3.0 / (3 + 5);
    float prob_travessa2 = 4.0 / (4 + 2);

    // Número total de simulações
    unsigned n = 1000000;

    // Variáveis para contar o número de vezes que um pastel foi pego
    int pastel_contador = 0;

    // Loop para realizar as simulações
    for (unsigned i = 0; i < n; ++i) {
        // Escolha aleatória da travessa (0 para travessa 1, 1 para travessa 2)
        int travessa_escolhida = rand() % 2;

        // Escolha aleatória do salgado dentro da travessa escolhida
        float random_value = (float)rand() / RAND_MAX;

        // Verifica se o salgado escolhido é um pastel, com base na travessa escolhida
        if ((travessa_escolhida == 0 && random_value < prob_travessa1) ||
            (travessa_escolhida == 1 && random_value < prob_travessa2)) {
            pastel_contador++;
        }
    }

    // Calcula a probabilidade total de pegar um pastel
    float prob_total_pastel = (float)pastel_contador / n;

    // Exibe a probabilidade total de pegar um pastel
    std::cout << "Probabilidade total de pegar um pastel: " << prob_total_pastel << std::endl;
}

/// Questão 9 - Lista Básica (Resolvidos)
///
/// \brief Numa turma de curso de inglês com dez alunos, dentre eles Joana, quatro serão escolhidos para ganhar um livro.
///        Qual a probabilidade de Joana ser sorteada?
void Q9() {
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
}

/// Questão 9 - Lista Básica (Resolvidos)
/// \brief Considere um conjunto de 4 números dos quais nenhum deles é zero, dois são positivos e
///   dois são negativos. Sorteamos ao acaso, com reposição, 2 números desse conjunto.
///   Determine a probabilidade de:
///   a.) Um deles ser negativo
///   b.) O quociente entre eles ser negativo.
///   c.) Os dois n´umeros terem o mesmo sinal 
void Q9p() {
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    unsigned n = 1000000; // número de simulações

    // conjunto de 4 números (2 positivos e 2 negativos)
    const int P1 = 0;
    const int P2 = 1;
    const int N1 = 2;
    const int N2 = 3;

    float prob_negativo = 0;
    float prob_quociente_negativo = 0;
    float prob_mesmo_sinal = 0;

    // executa as simulações
    for (unsigned i = 0; i < n; i++) {
        int num_escolhido = rand() % 4; // 0 para P1, 1 para P2, 2 para N1 e 3 para N2
        int num2_escolhido = rand() % 4;

        // probabilidade de um deles ser negativo
        if ((num_escolhido == N1 || num_escolhido == N2) && (num2_escolhido == P1 || num2_escolhido == P2))
            prob_negativo++;

        // probabilidade do quociente ser negativo (b)
        if ((num_escolhido < 2 && num2_escolhido >= 2) || (num_escolhido >= 2 && num2_escolhido < 2))
            prob_quociente_negativo++;

        // probabilidade dos números terem o mesmo sinal (c)
        if ((num_escolhido < 2 && num2_escolhido < 2) || (num_escolhido >= 2 && num2_escolhido >= 2))
            prob_mesmo_sinal++;
    }

    // dividindo os casos favoráveis pelo número totald e casos
    prob_negativo /= n;
    prob_quociente_negativo /= n;
    prob_mesmo_sinal  /= n;

    std::cout << "Probabilidade de serem negativos: " << prob_negativo << " \n";
    std::cout << "Probabilidade de quociente negativo: " << prob_quociente_negativo << " \n";
    std::cout << "Probabilidade de terem o mesmo sinal: " << prob_mesmo_sinal << " \n";
}


int main() {

    return 0;
}
