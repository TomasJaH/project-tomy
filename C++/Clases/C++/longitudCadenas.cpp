#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[40];
    int longitud = 0;

    cout<<"Escribe un mensaje (Max 40 palabras): ";
    cin.getline(palabra,40,'\n');

    longitud = strlen(palabra);

    cout<<"El numero de elementos de la cadena es de: "<<longitud<<" letras."<<endl;

    getch();
    return 0;
}