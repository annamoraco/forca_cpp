#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"

extern std::string palavra_secreta ;

void sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();
    srand(time(NULL));
    const int indice = rand() % palavras.size();
    palavra_secreta = palavras[indice];  
}