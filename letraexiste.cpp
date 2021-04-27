#include <iostream>
#include <vector>

extern std::string palavra_secreta ;
extern std::vector<char> chutes_errados;

void letraexiste(char chute){
    for (char letra : palavra_secreta){
        if (chute == letra){
            std::cout << "Acertou a letra!" << std::endl << std::endl;
            return;
        }
    }
    std::cout << "A palavra não tem essa letra." << std::endl << std::endl;
    chutes_errados.push_back(chute);
}