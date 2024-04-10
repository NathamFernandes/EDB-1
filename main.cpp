#include <iostream>

int main(int argc, char *argv[]) {
    int *ponteiroInt = new int;
    int inteiro = 10;

    std::cout << ponteiroInt << "teste" << *ponteiroInt << std::endl;

    delete ponteiroInt;

    std::cout << ponteiroInt << "teste" << *ponteiroInt << std::endl;

    ponteiroInt = &inteiro;

    std::cout << ponteiroInt << "teste" << *ponteiroInt << std::endl;

    return 0;
}