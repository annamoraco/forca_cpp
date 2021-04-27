#include <iostream>
#include <map>

extern std::string palavra_secreta ;
extern std::map<char, bool> chutou; // mapa ou dicionário

void imprimepalavra(){
    std::cout << std::endl ;
    for (char letra : palavra_secreta){
        if (chutou[letra]){
            std::cout << letra << " ";
        } else {
            std::cout << "_ ";
        }

    }
    std::cout << std::endl << std::endl ;
}