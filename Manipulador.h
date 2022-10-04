#ifndef MANIPULADOR_H_
#define MANIPULADOR_H_

#include <iostream>
#include <fstream>
#include "TituloNetflix.h"

using namespace std;

class Manipulador
{
    public:
        int ler_inteiro(ifstream& arquivo);
        string ler_registro(ifstream& arquivo);

        bool escrever_inteiro(ofstream& arquivo, int inteiro);
        bool escrever_string(ofstream& arquivo, string dados);
        bool escrever_string(ofstream& arquivo, string dados, int tamanho);
        bool escrever_dados(ofstream& arquivo, void *dados, int tamanho);

        //criar essas funções depois
    /*

        bool criar_arquivo_indice(const char *nome_arq_entrada,TituloNetflix* TN );
        bool criar_arquivo_titulo(const char *nome_arq_entrada,TituloNetflix* TN );
        //RETORNA O O QUE SERÁ PASSADO COMO TN
        TituloNetflix* gerar_array_de_titulos(const char *nome_arq_entrada);

    */

};

#endif // MANIPULADOR_H_
