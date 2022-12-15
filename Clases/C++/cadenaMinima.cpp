#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char direccion[50];
    int l = 0;

    cout<<"Ingrese su Direccion (min 10 caracteres): ";
    cin.getline(direccion,50,'\n');

    l=strlen(direccion);

    if(l>=10){
        cout<<"Su direccion es: "<<direccion<<endl;
    }else{
        cout<<"Ha ingresado menos de 10 caracteres"<<endl;
    }

    getch();
    return 0;
}