#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "le_arquivo.hpp"

std::string sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();
    srand(time(NULL));
    const int indice = rand() % palavras.size();
    return palavras[indice];  
}