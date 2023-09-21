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
