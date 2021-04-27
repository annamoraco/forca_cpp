#include <iostream>
#include <vector>

extern std::vector<char> chutes_errados;

void chuteserrados(){

    if (chutes_errados.size() > 0 ){
    std::cout << "Chutes errados: ";
    for (char letra : chutes_errados){
        std::cout << letra << " ";
    } 
    std::cout << std::endl << std::endl;
    }
}