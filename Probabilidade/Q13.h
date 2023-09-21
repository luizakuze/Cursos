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
