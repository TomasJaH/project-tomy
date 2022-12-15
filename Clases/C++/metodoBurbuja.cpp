#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    int numeros[100],n, aux;

    cout<<"Cuantos elementos va atener este arreglo: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Digite el elemento "<<(i+1)<<": ";
        cin>>numeros[i];
    }

    //Algoritmo metodo burbuja 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    cout<<"\nArreglo de forma ascendente: \n";

    for(int i=0;i<n;i++){
        cout<<numeros[i]<<' ';
    }

    cout<<"\nArreglo de forma descendente: \n";

    for(int i=(n-1);i>=0;i--){
        cout<<numeros[i]<<' ';
    }

    getch();
    return 0;
}