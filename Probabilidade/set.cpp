// Revisão do set: como varrer o set do início ao fim 

#include <iostream>
#include <set>

int main() {
    std::set<int> conjunto = {10, 20, 30, 40, 50};

    int elemento_procurado = 30;

    // procurando o elemento no conjunto
    auto iterador = conjunto.find(elemento_procurado);

    if (iterador != conjunto.end()) {
        std::cout << "O elemento " << elemento_procurado << " foi encontrado no conjunto." << std::endl;
    } else {
        std::cout << "O elemento " << elemento_procurado << " não foi encontrado no conjunto." << std::endl;
    }

    return 0;
}
