#include <iostream>
#include <vector>

void chuteserrados(const std::vector<char>& chutes_errados){

    if (chutes_errados.size() > 0 ){
    std::cout << "Chutes errados: ";
    for (char letra : chutes_errados){
        std::cout << letra << " ";
    } 
    std::cout << std::endl << std::endl;
    }
}