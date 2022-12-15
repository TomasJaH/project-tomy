#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100], n, mayor=-1000;

    cout<<"Digite el numero de elementos de este arreglo: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i<<": ";
        cin>>numeros[i];

        if(numeros[i] > mayor){
            mayor = numeros[i]; 
        }
    }

    cout<<"\nArreglo: \n";

    for(int i=0;i<n;i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\n\nEl numero mayor del arreglo es: "<<mayor<<endl;

    getch();
    return 0;
}