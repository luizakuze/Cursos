/* Alguns amigos estão em uma lanchonete. Sobre a mesa há duas travessas. Em uma delas há 3
pastéis e 5 coxinhas. Na outra hé 2 coxinhas e 4 pastéis. Se ao acaso alguém escolher uma destas
travessas e também ao acaso pegar um dos salgados, qual a probabilidade de se ter pegado um pastel? */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));  // inicializa o gerador de números aleatórios com o tempo atual

    // probabilidade de pegar um pastel em cada travessa
    float prob_travessa1 = 3.0 / (3 + 5);
    float prob_travessa2 = 4.0 / (4 + 2);

    // número total de simulações
    unsigned n = 1000000;

    // variáveis para contar o número de vezes que um pastel foi pego
    int pastel_contador = 0;

    // loop para realizar as simulações
    for (unsigned i = 0; i < n; i++) {
        // escolha aleatória da travessa (0 para travessa 1, 1 para travessa 2)
        int travessa_escolhida = rand() % 2;

        // escolha aleatória do salgado dentro da travessa escolhida
        float random_value = (float)rand() / RAND_MAX;

        // verifica se o salgado escolhido é um pastel, com base na travessa escolhida
        if ((travessa_escolhida == 0 && random_value < prob_travessa1) ||
            (travessa_escolhida == 1 && random_value < prob_travessa2)) {
            pastel_contador++;
        }
    }

    // Calcula a probabilidade total de pegar um pastel
    float prob_total_pastel = (float)pastel_contador / n;

    // Exibe a probabilidade total de pegar um pastel
    std::cout << "Probabilidade total de pegar um pastel: " << prob_total_pastel << std::endl;

    return 0;
}
