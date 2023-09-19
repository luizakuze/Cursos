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

using namespace std;

int main() {
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    unsigned n = 1000000; // número de simulações

    // probabilidade dos testes
    const float t1 = 0.05;
    const float t2 = 0.02;

    float prob_t1 = 0;
    float prob_t2 = 0;
    float prob_t2t1 = 0;

    // executa as simulações
    for (unsigned i = 0; i < n; i++) {
        float peso_random = rand ()% 2;  // 0 e 1 para peso
        float dimensao_random = rand ()% 2;  // 0 e 1 para dimensão

        // se o pacote excede o limite de peso
        if (peso_random <= t1) {
            prob_t1 += 1.0;

            // se exceder o limite de dimensão também
            // já é a probabilidade da interseção de t1 e t2
            if (dimensao_random <= t2)
                prob_t2t1 += 1.0;
        }
    }

    prob_t1 /= n;
    prob_t2 /= n;
    prob_t2t1 /= prob_t1; // prob t2 dado que t1

    std::cout << "P(A): " << prob_t1 << "\n";
    std::cout << "P(B): " << prob_t2 << "\n";
    std::cout << "P(B|A): " << prob_t2t1 << "\n";

    return 0;
}
