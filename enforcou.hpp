#include <vector>
#include <iostream>

inline bool enforcou(const std::vector<char>& chutes_errados) {
    if (chutes_errados.size() > 6) {
        std::cout << "Você perdeu, tente mais uma vez." << std::endl << std::endl;
        return true;
    }
    else {
        return false;
    }
}