#include <iostream>
#include <cctype>
#include <map>

char recebe_chute(std::map<char, bool>* chutou){
    int x = 0;
    char chute;
        do {
      
        std::cout << "Chute uma letra: ";
        std::cin >> chute;

        if (toupper(chute) >= 'A' && toupper(chute) <= 'Z' ){
            break;
        } 
        std::cout << "Caractere inv�lido." << std::endl << std::endl;

        } while (x == 0);
        (*chutou)[toupper(chute)] = true;
        return toupper(chute);
}