#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char ent[100];
    char dec[100];
    int numero;
    float decimal, suma;

    cout<<"Ingresa un entero: ";
    cin.getline(ent,100,'\n');

    cout<<"Ingresa un decimal: ";
    cin.getline(dec,100,'\n');

    numero = atoi(ent);
    decimal = atof(dec);

    suma = (numero + decimal);

    cout<<"La suma de los numeros es de: "<<suma<<endl;

    getch();
    return 0;
}