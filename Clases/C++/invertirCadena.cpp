#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char nombre[100];

    cout<<"Ingresa tu nombre: ";
    cin.getline(nombre,100,'\n');

    strrev(nombre);

    cout<<"Tu nombre al reves es: "<<nombre<<endl;

    getch();
    return 0;
}