# include <iostream>
# include <string>
# include <regex>

using namespace std;


bool integerNumber(string e){
    std::regex intRegex("[0-9]+");
    return std::regex_match(e, intRegex);
}

bool floatNumber(string e){
    std::regex floatRegex("([0-9]+([.][0-9]*)?|[.][0-9]+)$");
    return std::regex_match(e, floatRegex);
}


bool realtionalOperator(string e){
    std::regex rellRegex("<|<=|>|>=|==|!=");
    return std::regex_match(e, rellRegex); 
}

bool arithmeticOperator(string e){
    std::regex aritRegex("\\+|\\-|\\*|\\/");
    return std::regex_match(e, aritRegex);
}


bool reservedWord(string e){
    std::regex reservedRegex("int|float|while|for|if|bool|class|else|switch|char|string|include|struct");
    return std::regex_match(e, reservedRegex);
}

bool simbols(string e){
    std::regex simRegex("\\{\\}|\\;|\\#|\\(\\)|\\\"\\\"");
    return std::regex_match(e, simRegex);
}


void lexico(){
    string myStr;
    cout << "Ingrese la cadena a evaluar: ";
    getline(cin, myStr);
    if (integerNumber(myStr)){
        cout << "Numero entero: " << myStr << endl;
    }
    else if (floatNumber(myStr)){
        cout << "Numero real: " << myStr << endl;
    }
    else if (realtionalOperator(myStr)){
        cout << "Operador relacional: " << myStr << endl;
    }
    else if (arithmeticOperator(myStr)){
        cout << "Operador aritmetico: " << myStr << endl;
    }
    else if (reservedWord(myStr)){
        cout << "Palabra reservada: " << myStr << endl;
    }
    else if (simbols(myStr)){
        cout << "Simbolo de programa: " << myStr << endl;
    }
    else{
        cout << "Token no reconocido, favor de verificar la cadena: " << myStr << endl;
    }
}