#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numero, intentos = 0;

    do{
        cout<<"Ingrese un numero: ";
        cin>>numero;
        intentos++;
    }while(numero != 0);

    cout<<"El numero de intentos fue: "<<intentos<<endl;

    getch();
    return 0;
}