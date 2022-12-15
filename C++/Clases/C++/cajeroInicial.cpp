#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int saldo_inicial = 1000, opc;
    float extra, saldo = 0, retiro;

    cout<<"\tBienvenido a mi cajero automatico"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Consultar saldo"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opc;

    switch(opc){
        case 1:
            cout<<"Digite la cantidad de dinero a ingresar: ";
            cin>>extra;
            saldo = saldo_inicial + extra;
            cout<<"Has quedado con: "<<saldo<<endl;
            break;

        case 2:
            cout<<"Digite la cantidad de dinero que va a retirar: ";
            cin>>retiro;

            if(retiro > saldo_inicial){
                cout<<"No tienes dinero suficiente para retirar eso"<<endl;
                break;
            } else {
                saldo = saldo_inicial - retiro;
                cout<<"Has quedado con: "<<saldo<<endl;
                break;
            }
        case 3: 
            cout<<"En tu cuenta tienes: "<<saldo_inicial<<endl;
            break;
        case 4:
            break;
        default: cout<<"Has ingresado una opcion no valida"<<endl;
    }

    getch();
    return 0; 
} 