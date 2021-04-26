#include <iostream>
#include <string>
#include <clocale>
#include <map>

using namespace std;

const string PALAVRA_SECRETA = "ABACAXI";
map<char, bool> chutou;

void letraexiste(char chute){
    for (char letra : PALAVRA_SECRETA){
        if (chute == letra){
            cout << "Acertou a letra!" << endl << endl;
            return;
        }
    }
    cout << "A palavra não tem essa letra." << endl << endl;
}

void imprimepalavra(){
    cout << endl ;
    for (char letra : PALAVRA_SECRETA){
        if (chutou[letra]){
            cout << letra << " ";
        } else {
            cout << "_ ";
        }

    }
    cout << endl << endl ;
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

        chutou[chute] = true;

        imprimepalavra();

        letraexiste(chute);
          
    }
}