#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    int numeros[100], n, pos, aux;

    cout<<"Ingrese el numero de elementos del arreglo: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<": ";
        cin>>numeros[i];
    }

    //Algoritmo Ordenamiento por Insercion

    for(int i=0;i<n;i++){
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout<<"\nOrden Ascendente: ";

    for(int i=0;i<n;i++){
        cout<<numeros[i]<<' ';
    }

    cout<<"\nOrden Descendente: ";

    for(int i=(n-1);i>=0;i--){
        cout<<numeros[i]<<' ';
    }
    
    getch();
    return 0;
}