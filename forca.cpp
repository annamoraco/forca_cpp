#include <iostream>
#include <string>
#include <clocale>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

string palavra_secreta ;
map<char, bool> chutou; // mapa ou dicion�rio
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
    for (char letra : palavra_secreta){
        if (chute == letra){
            cout << "Acertou a letra!" << endl << endl;
            return;
        }
    }
    cout << "A palavra n�o tem essa letra." << endl << endl;
    chutes_errados.push_back(chute);
}

void imprimepalavra(){
    cout << endl ;
    for (char letra : palavra_secreta){
        if (chutou[letra]){
            cout << letra << " ";
        } else {
            cout << "_ ";
        }

    }
    cout << endl << endl ;
}

bool acertou(){
    for (char letra : palavra_secreta){
        if (!chutou[letra]){
            return false;
        }
    }
    cout << "PARAB�NS!!! Voc� ganhou!" << endl << endl ; 
    return true;
}

bool enforcou(){
    if (chutes_errados.size() > 4){
        cout << "Voc� perdeu, tente mais uma vez." << endl << endl ; 
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

vector<string> le_arquivo(){
    ifstream arquivo; //dado de leitura de arquivo
    arquivo.open("palavras.txt");
    
    if (arquivo.is_open())
    {
    int qtde;
    arquivo >> qtde;
    vector<string> palavras;

    for (int i = 0; i < qtde ; i++){
        string palavra;
        arquivo >> palavra;
        palavras.push_back(palavra);
    }
    arquivo.close();
    return palavras;}
    else {
        cout << "Arquivo de palavras n�o encontrado." << endl << endl;
        exit(0);
    }
}

void sorteia_palavra(){
    vector<string> palavras = le_arquivo();
    srand(time(NULL));
    const int indice = rand() % palavras.size();
    palavra_secreta = palavras[indice];  
}

int main(){

    setlocale(LC_ALL, "");
    cabecalho();

    sorteia_palavra();

    imprimepalavra();  

    while (!enforcou() && !acertou()){

        chuteserrados();

        char chute = recebe_chute();

        letraexiste(chute);

        imprimepalavra();          
    }
}