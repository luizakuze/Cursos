#include <iostream>
#include <cstdlib>
#include <ctime>

/// Questão 07 - Lista Básica (Apresentação)
/// \Enunciado Alguns amigos estão em uma lanchonete e há duas travessas na mesa com salgados. <br> A primeira travessa contém 3 pastéis e 5 coxinhas, e a segunda contém 2 coxinhas e 4 pastéis. <br>
/// Se alguém escolher uma das travessas e, em seguida, pegar um salgado ao acaso, <br>
/// qual é a probabilidade de ter pego um pastel? <br>
void Q7 () {
    srand(time(NULL));

    // probabilidade de pegar um pastel em cada travessa
    const float prob_travessa1 = 3.0 / (3 + 5);
    const float prob_travessa2 = 4.0 / (4 + 2);

    // número de simulações
    unsigned n = 1000000;

    int pegou_pastel = 0;

    for (unsigned i = 0; i < n; i++) {
        int travessa_escolhida = rand() % 2 + 1; // 1 para travessa 1 e 2 para travessa 2
        float salgado_escolhido = (float) rand() / RAND_MAX; // escolhe um salgado aleatório [0,1)

        // verifica se o salgado escolhido é um pastel
        if ((travessa_escolhida == 1 && salgado_escolhido < prob_travessa1) ||
            (travessa_escolhida == 2 && salgado_escolhido < prob_travessa2)) {
            pegou_pastel++;
        }
    }

    float prob_pastel = (float) pegou_pastel / n;
    std::cout << "> Questão 07 - Apresentação" << std::endl;
    std::cout << "Probabilidade total de pegar um pastel: " << prob_pastel << std::endl << std::endl;
}

/// Questão 09 - Lista Básica (Resolvidos)
/// \Enunciado Numa turma de curso de inglês com dez alunos, dentre eles Joana, quatro serão escolhidos para ganhar um livro. Qual a probabilidade de Joana ser sorteada?
void Q9() {
    srand(time(NULL));

    const int total_alunos = 10;     // número total de alunos na turma
    const int alunos_a_escolher = 4; // alunos a serem escolhidos para ganhar um livro

    int sorteou_joana = 0;

    // número de simulações
    unsigned n = 1000000;

    for (unsigned i = 0; i < n; i++) {
        int alunos_sorteados = rand() % total_alunos + 1;  // sorteia alunos da turma (1 a 10 alunos)

        // Verifica se Joana foi sorteada
        if (alunos_sorteados <= alunos_a_escolher) {
            sorteou_joana++;
        }
    }

    double probabilidade_joana = float (sorteou_joana) / n;
    std::cout << "> Questão 09 - Resolvidos" << std::endl;
    std::cout << "Probabilidade de Joana ser sorteada: " << probabilidade_joana << std::endl << std::endl;
}

/// Questão 09 - Lista Básica (Propostos)
/// \Enunciado Considere um conjunto de 4 números dos quais nenhum deles é zero, dois são positivos e
/// dois são negativos. Sorteamos ao acaso, com reposição, 2 números desse conjunto. <br>
/// Determine a probabilidade de: <br>
/// a.) Um deles ser negativo <br>
/// b.) O quociente entre eles ser negativo. <br>
/// c.) Os dois números terem o mesmo sinal
void Q9p() {
    srand(time(NULL));

    // número de simulações
    unsigned n = 100000;

    int negativo = 0;
    int quociente_negativo = 0;
    int mesmo_sinal = 0;

    for (unsigned i = 0; i < n; i++) {
        int num_escolhido = rand() % 4 + 1; // 1 para P1, 2 para P2, 3 para N1 e 4 para N2
        int num2_escolhido = rand() % 4 + 1;

        // probabilidade de um deles ser negativo (a)
        if ((num_escolhido >= 3 && num2_escolhido < 3) || (num2_escolhido >= 3 && num_escolhido < 3))
            negativo++;

        // probabilidade do quociente ser negativo (b)
        if ((num_escolhido < 3 && num2_escolhido >= 3) || (num_escolhido >= 3 && num2_escolhido < 3))
            quociente_negativo++;

        // probabilidade dos números terem o mesmo sinal (c)
        if ((num_escolhido >= 3 && num2_escolhido >= 3) || (num_escolhido <= 2 && num2_escolhido <= 2))
            mesmo_sinal++;
    }

    float prob_negativo = (float) negativo / n;
    float prob_quociente_negativo = (float) quociente_negativo / n;
    float prob_mesmo_sinal = (float) mesmo_sinal / n;

    std::cout << "> Questão 09 - Propostos" << std::endl;
    std::cout << "Probabilidade de um deles ser negativo: " << prob_negativo << std::endl;
    std::cout << "Probabilidade de quociente ser negativo: " << prob_quociente_negativo << std::endl;
    std::cout << "Probabilidade de terem o mesmo sinal: " << prob_mesmo_sinal << std::endl << std::endl;
}

/// Questão 13 - Lista de Condicional (Apresentação)
/// \Enunciado Um jogo de computador requer que um jogador encontre um refúgio seguro num local onde os seus inimigos
/// não conseguem entrar. Quatro portas aparecem à sua frente, sendo que ele deve escolher uma para entrar.
/// A seguir, o jogador deve fazer uma segunda escolha entre dois, quatro, um ou cinco buracos para descer,
/// dependendo, respectivamente, da porta que ela atravessa. Em cada caso, um buraco leva ao porto seguro.
/// O jogador é pressionado em tomar uma decisão e em sua pressa faz escolhas aleatórias.
/// <br> Qual é a probabilidade de ela chegar em segurança ao refúgio?
void Q13() {
    srand(time(NULL));

    unsigned n = 1000000; // número de simulações

    float prob_p1 = 0;
    float prob_p2 = 0;
    float prob_p3 = 0;
    float prob_p4 = 0;

    // executa as simulações
    for (unsigned i = 0; i < n; i++) {
        int porta_escolhida = rand() % 4 + 1; // escolhe uma porta entre 1, 2, 3, 4

        int buraco_escolhido;
        switch (porta_escolhida) {
            case (1):
                // entrou na P1, tem 2 buracos
                buraco_escolhido = rand() % 2; // entre 0 e 1
                if (buraco_escolhido == 0) // escolhendo buraco correto como o 0
                    prob_p1++;
                break;
            case (2):
                // entrou na P2, tem 4 buracos
                buraco_escolhido = rand() % 4;
                if (buraco_escolhido == 0)
                    prob_p2++;
                break;
            case (3):
                // entrou na P3, tem 1 buraco
                prob_p3++;
                break;
            case (4):
                // entrou na P4, tem 5 buracos
                buraco_escolhido = rand() % 5;
                if (buraco_escolhido == 0)
                    prob_p4++;
                break;
        }
    }

    // dividindo pelo número total de casos
    prob_p1 /= n;
    prob_p2 /= n;
    prob_p3 /= n;
    prob_p4 /= n;

    float prob_total = prob_p1 + prob_p2 + prob_p3 + prob_p4;

    std::cout << "> Questão 13 - Apresentação" << std::endl;
    std::cout << "Probabilidade de sucesso total: " << prob_total << std::endl << std::endl;;
}

/// Questão 12 - Lista de Condicional (Apresentação) <br> <br>
/// \Enunciado Antes de serem carregados em um caminhão de distribuição, os pacotes estão sujeitos a testes independentes,
/// para garantir que o motorista do caminhão possa segurá-los com segurança.
/// O peso do pacote não deve exceder 30 kg e a soma das três dimensões deve ser inferior a 1m.
/// Tem sido observado que 5% dos pacotes excedem o limite de peso e 2% excedem o limite de dimensão.
/// Qual é a probabilidade de que um pacote que atenda ao requisito de peso falhe no requisito de dimensão? <br> <br>
/// * t1 = exceder o limite de peso <br>
/// * t2 = exceder o limite de dimensão */
void Q12() {
    srand(time(NULL));

    // probabilidade de cada teste
    const double prob_aceitacao_t1 = 0.95;
    const double prob_reprovacao_t2 = 0.02;

    // pacote aceito em t1 e reprovado em t2
    int pacotes_t1t2 = 0;

    // número de simulações
    unsigned n = 1000000;

    for (unsigned i = 0; i < n; i++) {
        double aceitacao_t1 = (double) rand() / RAND_MAX;  // aceitação em t1
        double reprovacao_t2 = (double) rand() / RAND_MAX; // reprovação em t2

        // verifica se o pacote foi aceito em t1 e reprovado em t2
        if (aceitacao_t1 <= prob_aceitacao_t1 && reprovacao_t2 <= prob_reprovacao_t2) {
            pacotes_t1t2++;
        }
    }

    double prob_t1t2 = (double) pacotes_t1t2 / n;

    std::cout << "> Questão 12 - Resolvidos" << std::endl;
    std::cout << "Probabilidade de um pacote ser aceito em t1 e reprovado em t2: " << prob_t1t2 << std::endl;
}

int main() {
    std::cout << "..:Exercícios da Lista Básica:.." << std::endl << std::endl;
    Q7();   // apresentação
    Q9();   // resolvidos
    Q9p();  // propostos

    std::cout << "..:Exercícios da Lista de Condicional:.." << std::endl << std::endl;
    Q13();  // apresentação
    Q12();  // resolvidos

    return 0;
}
