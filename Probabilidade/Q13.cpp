/*  Um jogo de computador requer que um jogador encontre um refúgio seguro num local onde os seus inimigos
    não conseguem entrar. Quatro portas aparecem à sua frente, sendo que ele deve escolher uma para entrar.
    A seguir, o jogador deve fazer uma segunda escolha entre dois, quatro, um ou cinco buracos para descer,
    dependendo, respectivamente, da porta que ela atravessa. Em cada caso, um buraco leva ao porto seguro.

    O jogador é pressionado em tomar uma decisão e em sua pressa faz escolhas aleatórias.
    Qual é a probabilidade de ela chegar em segurança ao refúgio? */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // inicializa o gerador de números aleatórios

    unsigned n = 1000000; // número de simulações

    //  probabilidade de escolher qualquer uma das portas
    const int P1 = 0; //2 buracos ... prob 1/2
    const int P2 = 1; //4 buracos ... prob 1/4
    const int P3 = 2; //1 buracos ... prob 1
    const int P4 = 3; //5 buracos ... prob 1/5

    float prob_p1 = 0;
    float prob_p2 = 0;
    float prob_p3 = 0;
    float prob_p4 = 0;

    // executa as simulações
    for (unsigned i = 0; i < n; i++) {
        int P_escolhido = rand() % 4; // escolhe uma porta entre 0, 1, 2, 3

        // entrou na P1, tem 2 buracos
        if (P_escolhido == P1) {
            int buraco_escolhido = rand() % 2;
            if (buraco_escolhido == 0)
                prob_p1++;
        }

        // entrou na P2, tem 4 buracos
        if (P_escolhido == P2) {
            int buraco_escolhido = rand() % 4;
            if (buraco_escolhido == 0)
            prob_p2++;
        }

        // entrou na P3, tem 1 buraco
        if (P_escolhido == P3) {
            prob_p3++;
        }

        // entrou na P4, tem 5 buracos
        if (P_escolhido == P4){
            int buraco_escolhido = rand() % 5;
            if (buraco_escolhido == 0)
                prob_p4++;
        }

        /// USAR SWITCH CASE!!
    }

    // dividindo os casos favoráveis pelo número total de casos
    prob_p1 /= n;
    prob_p2 /= n;
    prob_p3 /= n;
    prob_p4 /= n;

    float prob_total = prob_p1 + prob_p2 + prob_p3 + prob_p4;

    std::cout << "Probabilidade de sucesso em p1: " << prob_p1 << " \n";
    std::cout << "Probabilidade de sucesso em p2: " << prob_p2 << " \n";
    std::cout << "Probabilidade de sucesso em p3: " << prob_p3 << " \n";
    std::cout << "Probabilidade de sucesso em p4: " << prob_p4 << " \n";
    std::cout << "Probabilidade de sucesso total: " << prob_total << "\n";

    return 0;
}
