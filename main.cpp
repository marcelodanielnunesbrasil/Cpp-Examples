#include <cstdlib>
#include <iostream>

using namespace std; //APENAS UM ARTIFICO PARA ALGUNS COMPILADORES

int main(int argc, char *argv[])//INICIO DO BLOCO DE EXECU��O main(){}
{
    int idade = 0; //INICIALIZA��O DA VARIAVEL E ATRIBUI��O DO VALOR

    std::cout << "Entre com a idade do narrador:" << std::endl; //EQUIVALENTE AO "SOUT" DO JAVA

    cin >> idade; // EQUIVALENTE AO SCANNER OU JOPTIONPANE DO JAVA

    if (idade >= 5 && idade <= 7){

        std::cout <<  "Infantil A" << endl;

    }else if (idade >= 8 && idade <= 10){

        std::cout <<  "Infantil B" << endl;

    }else if (idade >= 11 && idade <= 13){

        std::cout <<  "Juvenil A" << endl;

    }else if (idade >= 14 && idade <= 17){

        std::cout <<  "Juvenil B" << endl;

    }else if (idade >= 18){

        std::cout <<  "Adulto" << endl;

    }else{

       std::cout <<  "Idade invalida!!!" << endl; // SE CASO NENHUMA DAS CONDI��ES FOREM SATISFEITAS CAI NO ELSE

    }

    system("pause");//FAZ O COMPILADOR PARAR (DEPENDE MUITO DE CONSOLES) NO DevC++ por exemplo se usaria essa linha. No CodeBlocks n�o precisaria
    return 0;
}
