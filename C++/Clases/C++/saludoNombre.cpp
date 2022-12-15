#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char saludo[] = "Bienvenido a esta app, ", nombre[100];

    cout<<"Ingresa tu nombre: ";
    cin.getline(nombre,100,'\n');

    strcat(saludo,nombre);

    cout<<saludo<<endl;

    getch();
    return 0;
}