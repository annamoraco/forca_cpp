#include <iostream>
#include <fstream>
#include "le_arquivo.hpp"

std::vector<std::string> le_arquivo(){
    std::ifstream arquivo; //dado de leitura de arquivo
    arquivo.open("palavras.txt");
    
    if (arquivo.is_open())
    {
    int qtde;
    arquivo >> qtde;
    std::vector<std::string> palavras;

    for (int i = 0; i < qtde ; i++){
        std::string palavra;
        arquivo >> palavra;
        palavras.push_back(palavra);
    }
    arquivo.close();
    return palavras;}
    else {
        std::cout << "Arquivo de palavras não encontrado." << std::endl << std::endl;
        exit(0);
    }
}