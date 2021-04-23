#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << "BEM VINDO AO JOGO DA FORCA!" << endl;
    cout << "TENTE ADIVINHAR A PALAVRA " << endl << endl;

    string palavra_secreta = "ABACAXI";
    // cout << palavra_secreta << endl;

    bool enforcou = false;
    bool acertou = false;

    while (!enforcou && !acertou){
        
        char chute;
        cout << "Chute uma letra: ";
        cin >> chute;
        
        cout << "Seu chute foi: " << chute << endl << endl; 
          
    }
}