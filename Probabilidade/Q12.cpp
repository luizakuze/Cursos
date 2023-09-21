/*  Antes de serem carregados em um caminhão de distribuição, os pacotes estão sujeitos a testes independentes,
    para garantir que o motorista do caminhão possa segurá-los com segurança.
    O peso do pacote não deve exceder 30 kg e a soma das três dimensões deve ser inferior a 1m.
    Tem sido observado que 5% dos pacotes excedem o limite de peso e 2% excedem o limite de dimensão.
    Qual é a probabilidade de que um pacote que atenda ao requisito de peso falhe no requisito de dimensão? */

/* ---> t1 = exceder o limite de peso
 * ---> t2 = exceder o limite de dimensão */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));  // inicializa o gerador de números aleatórios com o tempo atual

    // Probabilidade de aceitação no primeiro teste
    const double prob_aceitacao_primeiro_teste = 0.95;
    const double prob_reprovacao_segundo_teste = 0.02;

    // Variável para contar o número de vezes que um pacote é aceito no primeiro teste e reprovado no segundo
    int pacotes_aceitos_primeiro_reprovados_segundo = 0;

    // Número total de simulações
    unsigned n = 1000000;

    // Loop para realizar as simulações
    for (unsigned i = 0; i < n; ++i) {
        // Gera um número aleatório para simular a probabilidade de aceitação no primeiro teste
        double random_aceitacao_primeiro_teste = (double) rand() / RAND_MAX;

        // Gera um número aleatório para simular a probabilidade de reprovação no segundo teste
        double random_reprovacao_segundo_teste = (double) rand() / RAND_MAX;

        // Verifica se o pacote foi aceito no primeiro teste e reprovado no segundo
        if (random_aceitacao_primeiro_teste <= prob_aceitacao_primeiro_teste &&
            random_reprovacao_segundo_teste <= prob_reprovacao_segundo_teste) {
            pacotes_aceitos_primeiro_reprovados_segundo++;
        }
    }

    // Calcula a probabilidade de um pacote ser aceito no primeiro teste e reprovado no segundo
    double probabilidade = (double) pacotes_aceitos_primeiro_reprovados_segundo / n;

    // Exibe a probabilidade
    std::cout << "Probabilidade de um pacote ser aceito no primeiro teste e reprovado no segundo teste: " << probabilidade << std::endl;

    return 0;
}
