#include "imprimepalavra.hpp"

void imprimepalavra(const std::string& palavra_secreta, const std::map<char, bool>& chutou){
    std::cout << std::endl ;
    for (char letra : palavra_secreta){
        if (chutou.find(letra) != chutou.end() && chutou.at(letra)){
            std::cout << letra << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl << std::endl ;
}