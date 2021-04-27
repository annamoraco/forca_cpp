#include <iostream>
#include <string>
#include <map>

extern std::string palavra_secreta ;
extern std::map<char, bool> chutou;

bool acertou(){
    for (char letra : palavra_secreta){
        if (!chutou[letra]){
            return false;
        }
    }
    std::cout << "PARAB�NS!!! Voc� ganhou!" << std::endl << std::endl ; 
    return true;
}