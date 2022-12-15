#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros1[100], n, multiplicador, numeros2[100];

    cout<<"Digite el numero de elemtos del arreglo: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingrese el elemento "<<i<<": ";
        cin>>numeros1[i];
    }

    cout<<"\nPor cuanto quiere multiplicar los elementos de este arreglo?: ";
    cin>>multiplicador;

    for(int i=0; i<n;i++){
        numeros2[i] = (numeros1[i]*multiplicador);
    }

    cout<<"\nArreglo multiplicado por "<<multiplicador<<": "<<endl;

    for(int i=0; i<n; i++){
        cout<<"Elemento "<<i<<": "<<numeros2[i]<<endl;
    }

    getch();
    return 0;
}