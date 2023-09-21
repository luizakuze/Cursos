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
