#include <iostream>
#include <map>

bool acertou(const std::string& palavra_secreta, const std::map<char, bool>& chutou){
    for (char letra : palavra_secreta){
        if (chutou.find(letra) == chutou.end() || !chutou.at(letra)) {
            return false;
        }
    }
    std::cout << "PARABÉNS!!! Você ganhou!" << std::endl << std::endl ; 
    return true;
}