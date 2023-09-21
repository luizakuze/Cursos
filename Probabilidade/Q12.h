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
    int pacotes_aceitacaot1_reprovacaot2 = 0;

    // número de simulações
    unsigned n = 1000000;

    for (unsigned i = 0; i < n; i++) {
        double aceitacao_t1 = (double) rand() / RAND_MAX;  // aceitação em t1
        double reprovacao_t2 = (double) rand() / RAND_MAX; // reprovação em t2

        // verifica se o pacote foi aceito em t1 e reprovado em t2
        if (aceitacao_t1 <= prob_aceitacao_t1 && reprovacao_t2 <= prob_reprovacao_t2) {
            pacotes_aceitacaot1_reprovacaot2++;
        }
    }

    double prob_t1t2 = (double) pacotes_aceitacaot1_reprovacaot2 / n;

    std::cout << "> Questão 12 - Resolvidos" << std::endl;
    std::cout << "Probabilidade de um pacote ser aceito em t1 e reprovado em t2: " << prob_t1t2 << std::endl;
}
