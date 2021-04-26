#include <iostream>
#include <string>
#include <clocale>

using namespace std;

const string PALAVRA_SECRETA = "ABACAXI";
string palavra_auxiliar;

bool letraexiste(char chute){
    for (char letra : PALAVRA_SECRETA){
        if (chute == letra){
            return true;
        }
    }
    return false;
}

int main(){

    setlocale(LC_ALL, "");
    cout << "BEM VINDO AO JOGO DA FORCA!" << endl;
    cout << "TENTE ADIVINHAR A PALAVRA " << endl << endl;

    bool enforcou = false;
    bool acertou = false;

    while (!enforcou && !acertou){
        
        char chute;
        cout << "Chute uma letra: ";
        cin >> chute;
        
        if (letraexiste(chute)){
            cout << "Acertou a letra!" << endl << endl;
        } else {
            cout << "A palavra não tem essa letra." << endl << endl;
        }
          
    }
}