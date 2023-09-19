/* Considere um conjunto de 4 números dos quais nenhum deles é zero, dois são positivos e
   dois são negativos. Sorteamos ao acaso, com reposição, 2 números desse conjunto.
   Determine a probabilidade de:
   a.) Um deles ser negativo
   b.) O quociente entre eles ser negativo.
   c.) Os dois n´umeros terem o mesmo sinal */

/* ---> vai ser negativo quando for um N e um P
 * ---> resultado da divisão é negativa quando há a divisão de um N por P
 * ---> os dois tem mesmo sinal quando 2 N ou 2 P */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
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

    return 0;
}
