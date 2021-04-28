#include "desenha_forca.hpp"

void desenha_forca(const int& erros) {

    std::cout << "    __________" << std::endl;
    std::cout << "   |          |" << std::endl;
    std::cout << "   |          |" << std::endl;
    std::cout << "   |          " << (erros >= 1 ? "O" : " ") << std::endl;
    std::cout << "   |         " << (erros >= 3 ? "/" : " ") << (erros >= 2 ? "|" : " ") << (erros >= 4 ? "\\" : "") << std::endl;
    std::cout << "   |          " << (erros >= 2 ? "|" : " ") << std::endl;
    std::cout << "   |         " << (erros >= 5 ? "/" : " ") << (erros >= 6 ? " \\" : "") << std::endl;
    std::cout << "  /|\\" << std::endl;
    std::cout << " / | \\" << std::endl;
    std::cout << "/  |  \\" << std::endl;
}