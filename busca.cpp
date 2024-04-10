#include <iostream>

int buscaSequencial(int k, int *vetor, int tamanho) {
    int posicao = 0;

    do {
        if (vetor[posicao] == k) {
            return posicao;
        }
        posicao = posicao + 1;
    } while (posicao < tamanho);

    return -1;
}

int buscaBinaria(int k, int *vetor, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    do {
        meio = (inicio + fim) / 2;
        std::cout << "meio" << meio << std::endl;

        if (vetor[meio] > k) {
            fim = meio - 1;
        } else if (vetor[meio] < k) {
            inicio = meio + 1;
        } else {
            return meio;
        }

    } while (inicio <= fim);

    return -1;
}

int main() {
    int *vetorInteiros = new int[5];
    int resposta;

    vetorInteiros[0] = 5;
    vetorInteiros[1] = 6;
    vetorInteiros[2] = 10;
    vetorInteiros[3] = 61;
    vetorInteiros[4] = 62;

    resposta = buscaBinaria(6, vetorInteiros, 5);

    std::cout << resposta << std::endl;
}