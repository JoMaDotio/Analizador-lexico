# include <iostream>
# include <string>

using namespace std;


bool realtionalOperator(string e){
    string rellOp[] = {"<", "<=", ">", ">=", "==", "!="};
    for (auto val: rellOp){
        if (val == e){
            return true;
        }
    }
    return false;
}

bool arithmeticOperator(string e){
    string aritOp[] = {"+", "-", "*", "/", "+=", "-=",  "++", "--"};
    for (auto val: aritOp){
        if (val == e){
            return true;
        }
    }
    return false;
}

bool logicOperator(string e){
    string logOp[] = {"||", "&&"};
    for (auto val: logOp){
        if (val == e){
            return true;
        }
    }
    return false;
}

bool reservedWord(string e){
    string reserWord [] = {"if", "for", "while", "else", "include", "int", "float", "bool"
                            "class", "break", "void", "string", "char"};
    for (auto val: reserWord){
        if (val == e){
            return true;
        }
    }
    return false;
}

bool simbols(string e){
    string sim[] = {"{}", ";", "#"};
    for (auto val: sim){
        if (val == e){
            return true;
        }
    }
    return false;
}


void lexico(){
    string myStr;
    cout << "Ingrese la cadena a evaluar: ";
    getline(cin, myStr);
    if (myStr.length() == 0){
        cout << "Cadena invalida, vuelva a intentarlo" << endl;
    }
    else if (realtionalOperator(myStr)){
        cout << "Es un operador relacional: " << myStr << endl;
        return;
    }  
    else if (arithmeticOperator(myStr)){
        cout << "Es un operador logico: " << myStr << endl;
        return;
    }
    else if (logicOperator(myStr)){
        cout << "Es un operador logico: " << myStr << endl;
        return;
    }
    else if (reservedWord(myStr)){
        cout << "Es una palabra reservada: " << myStr << endl;
        return;
    }
    else if (simbols(myStr)){
        cout << "Es un simbolo: " << myStr << endl;
        return;
    }
    else{
        cout << "Token no valido, vuelva a intentarlo" << endl;
    }

}