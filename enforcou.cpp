#include <vector>
#include <iostream>

extern std::vector<char> chutes_errados;

bool enforcou(){
    if (chutes_errados.size() > 6){
        std::cout << "Você perdeu, tente mais uma vez." << std::endl << std::endl ; 
        return true;
    } else {
        return false;
    }
}