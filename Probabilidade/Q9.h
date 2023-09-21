
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
