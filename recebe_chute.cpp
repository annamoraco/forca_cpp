#include <iostream>
#include <cctype>
#include <map>

extern std::map<char, bool> chutou; 

char recebe_chute(){
    int x = 0;
    char chute;
        do {
      
        std::cout << "Chute uma letra: ";
        std::cin >> chute;

        if (toupper(chute) >= 'A' && toupper(chute) <= 'Z' ){
            break;
        } 
        std::cout << "Caractere inválido." << std::endl << std::endl;

        } while (x == 0);
        chutou[toupper(chute)] = true;
        return toupper(chute);
}