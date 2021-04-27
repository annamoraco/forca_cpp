#include <iostream>
#include <string>
#include <clocale>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include "acertou.hpp"
#include "cabecalho.hpp"
#include "chuteserrados.hpp"
#include "desenha_forca.hpp"
#include "enforcou.hpp"
#include "imprimepalavra.hpp"
#include "le_arquivo.hpp"
#include "letraexiste.hpp"
#include "recebe_chute.hpp"
#include "sorteia_palavra.hpp"

using namespace std;

string palavra_secreta ;
map<char, bool> chutou; // mapa ou dicionário
vector<char> chutes_errados;

int main(){

    setlocale(LC_ALL, "");
    cabecalho();

    sorteia_palavra();

    imprimepalavra();  

    while (!enforcou() && !acertou()){

        chuteserrados();

        char chute = recebe_chute();

        letraexiste(chute);

        desenha_forca();

        imprimepalavra();          
    }
}