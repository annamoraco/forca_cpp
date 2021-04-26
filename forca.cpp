#include <iostream>
#include <string>
#include <clocale>
#include <map>
#include <vector>

using namespace std;

const string PALAVRA_SECRETA = "ABACAXI";
map<char, bool> chutou; // mapa ou dicionário
vector<char> chutes_errados;

void chuteserrados(){

    if (chutes_errados.size() > 0 ){
    cout << "Chutes errados: ";
    for (char letra : chutes_errados){
        cout << letra << " ";
    } 
    cout << endl << endl;
    }
}

void cabecalho(){
    cout << endl;
    cout << "*************************************" << endl;
    cout << "**** BEM VINDO AO JOGO DA FORCA! ****" << endl;
    cout << "***** TENTE ADIVINHAR A PALAVRA *****" << endl ;
    cout << "*************************************" << endl << endl;
}

void letraexiste(char chute){
    for (char letra : PALAVRA_SECRETA){
        if (chute == letra){
            cout << "Acertou a letra!" << endl << endl;
            return;
        }
    }
    cout << "A palavra não tem essa letra." << endl << endl;
    chutes_errados.push_back(chute);
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

bool acertou(){
    for (char letra : PALAVRA_SECRETA){
        if (!chutou[letra]){
            return false;
        }
    }
    cout << "PARABÉNS!!! Você ganhou!" << endl << endl ; 
    return true;
}

bool enforcou(){
    if (chutes_errados.size() > 4){
        cout << "Você perdeu, tente mais uma vez." << endl << endl ; 
        return true;
    } else {
        return false;
    }
}

char recebe_chute(){
        char chute;
        cout << "Chute uma letra: ";
        cin >> chute;

        chutou[chute] = true;
        return chute;
}
int main(){

    setlocale(LC_ALL, "");
    cabecalho();

    while (!enforcou() && !acertou()){

        chuteserrados();

        char chute = recebe_chute();

        letraexiste(chute);

        imprimepalavra();          
    }
}