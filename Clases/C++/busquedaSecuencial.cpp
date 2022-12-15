#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    int numeros[100],n, dato, i;
    char band = 'F';

    cout<<"Ingrese el numero de elementos del arreglo: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Digite el elemento "<<i+1<<": ";
        cin>>numeros[i];    
    }

    cout<<"Ingresa el numero a buscar en el arreglo: ";
    cin>>dato;

    i=0;

    while((band=='F')&&(i<n)){
        if(numeros[i] == dato){
            band = 'V';
        }
        i++;
    }

    cout<<"\nSu arreglo es: \n";

    for(int i=0;i<n;i++){
        cout<<numeros[i]<<' ';
    }

    if(band=='V'){
        cout<<"\nY el numero "<<dato<<" si esta dentro de el."<<endl;
    }else{
        cout<<"\nY el numero "<<dato<<" no esta dentro de el."<<endl;
    }

    getch();
    return 0;
}