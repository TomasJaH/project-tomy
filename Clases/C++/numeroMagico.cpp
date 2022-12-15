//Variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);

#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main(){

    int numero, dato, contador = 0;

    srand(time(NULL)); //generar un numero aleatorio
    dato = 1 + rand()%(100 + 1 - 1);

    do{
        cout<<"\nDigite un numero [1-100]: ";
        cin>>numero;

        if(numero > dato){
            cout<<"\nDigite un numero menor"<<endl;
        }
        if(numero < dato){
            cout<<"\nDigite un numero mayor"<<endl;
        }
        contador++;
    }while(numero != dato);

    cout<<"\nEl numero era: "<<dato<<", te tomo: "<<contador<<" intentos."<<endl;

    getch();
    return 0;
}