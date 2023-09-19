/// TERMINAR!!!

/*  Antes de serem carregados em um caminhão de distribuição, os pacotes estão sujeitos a testes independentes,
    para garantir que o motorista do caminhão possa segurá-los com segurança.
    O peso do pacote não deve exceder 30 kg e a soma das três dimensões deve ser inferior a 1m.
    Tem sido observado que 5% dos pacotes excedem o limite de peso e 2% excedem o limite de dimensão.
    Qual é a probabilidade de que um pacote que atenda ao requisito de peso falhe no requisito de dimensão? */

/* ---> t1 = exceder o limite de peso
 * ---> t2 = exceder o limite de dimensão */

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() {
//     srand(time(NULL)); // inicializa o gerador de números aleatórios

//     unsigned n = 1000000; // número de simulações

//     // probabilidade dos testes
//     const int t1 = 0.05;
//     const int t1c = 0.95; // 1 - t1
//     const int t2 = 0.02;
//     const int t2c = 0.98; // 1 - t2

//     float prob_t1 = 0;
//     float prob_t2 = 0;

//     // executa as simulações
//     for (unsigned i = 0; i < n; i++) {
//         int P_escolhido = rand() % 4; // escolhe uma porta entre 0, 1, 2, 3

//     }

//     // dividindo os casos favoráveis pelo número total de casos
//     prob_p1 /= n;
//     prob_p2 /= n;
//     prob_p3 /= n;
//     prob_p4 /= n;

//     // probabilidade de t1 falhar e r
//     float prob_total = prob_p1 + prob_p2 + prob_p3 + prob_p4;

//     std::cout << "Probabilidade de sucesso total: " << prob_total << "\n";

//     return 0;
// }
