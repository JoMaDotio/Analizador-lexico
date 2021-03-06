# include <iostream>
# include <string>
# include "compilador.hpp"

using namespace std;


enum OPTIONS{
    OPT_DO = 1,
    OPT_EX
};





int main(){

    string myStr;
    do{
        cout << "[Menu de programa]" << endl
             << "1.- Analizar una cadena" << endl
             << "2.- finalizar el programa" << endl;
        getline(cin, myStr);
        switch(atoi(myStr.c_str())){
            case OPT_DO:
            //funcion de evaluacion;
            lexico();
            break;
            case OPT_EX:
            break;
            default:
                cout << "Ingreso una opccion invalida, vuelva a intentarlo" << endl;
        }

    }while(atoi(myStr.c_str()) != OPT_EX);

    return 0;
}