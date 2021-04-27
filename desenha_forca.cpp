#include <iostream>
#include <vector>

extern std::vector<char> chutes_errados;

void desenha_forca(){
    int erros = chutes_errados.size();

    std::cout << "    __________" << std::endl;
    std::cout << "   |          |" << std::endl;
    std::cout << "   |          |" << std::endl;
    std::cout << "   |          " << (erros >= 1 ? "O" : " ") << std::endl;
    std::cout << "   |         " << (erros >= 3 ? "/" : " " ) << (erros >= 2 ? "|" : " " )<< (erros >= 4 ? "\\" : "" )<< std::endl;
    std::cout << "   |          " << (erros >= 2 ? "|" : " " )<< std::endl;
    std::cout << "   |         " << (erros >= 5 ? "/" : " " )<< (erros >= 6 ? " \\" : "" )<< std::endl;
    std::cout << "  /|\\" << std::endl;
    std::cout << " / | \\" << std::endl;
    std::cout << "/  |  \\" << std::endl;

}