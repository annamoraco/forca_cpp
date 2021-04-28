#include <iostream>
#include <string>
#include <clocale>
#include <map>
#include <vector>
#include <cstdlib>
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

int main()
{
    setlocale(LC_ALL, "");

    cabecalho();

    palavra_secreta = sorteia_palavra();

    imprimepalavra(palavra_secreta, chutou);

    while (!enforcou(chutes_errados) && !acertou(palavra_secreta, chutou)){

        chuteserrados(chutes_errados);

        char chute = recebe_chute(&chutou);

        letraexiste(palavra_secreta, chute, &chutes_errados);

        desenha_forca(chutes_errados.size());

        imprimepalavra(palavra_secreta, chutou);
    }
}