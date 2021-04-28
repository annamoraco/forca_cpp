#include <iostream>
#include <string>
#include <vector>

void letraexiste(const std::string& palavra_secreta, const char& chute, std::vector<char>* chutes_errados){
    for (char letra : palavra_secreta){
        if (chute == letra){
            std::cout << "Acertou a letra!" << std::endl << std::endl;
            return;
        }
    }
    std::cout << "A palavra não tem essa letra." << std::endl << std::endl;
    chutes_errados->push_back(chute);
}