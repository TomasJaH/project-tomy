#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    int numeros[100], n, aux, min, inf, sup, mitad, dato;
    char band = 'F';

    cout<<"Ingrese el numero de elementos del arreglo: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Digite el elemento "<<i+1<<": ";
        cin>>numeros[i];
    }

    //Algoritmo de Ordenamiento por seleccion

    for(int i=0;i<n;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout<<"\nOrden Ascendente: ";

    for(int i=0;i<n;i++){
        cout<<numeros[i]<<' ';
    }

    cout<<"\nOrden Descendente: ";

    for(int i=(n-1);i>=0;i--){
        cout<<numeros[i]<<' ';
    }

    cout<<"\n\nEscriba el dato a buscar dentro del arreglo: "<<endl;
    cin>>dato;

    inf = 0;
    sup = n;

    while(inf <= sup){
        mitad = (inf+sup)/2;

        if(numeros[mitad] == dato){
            band = 'V';
            break;
        }
        if(numeros[mitad] > dato){
            sup = mitad;
            mitad = (inf+sup)/2;
        }
        if(numeros[mitad] < dato){
            inf = mitad;
            mitad = (inf+sup/2);
        }
    }

    if(band=='V'){
        cout<<"\nEl numero "<<dato<<" si estaba en el arreglo."<<endl;
    } else {
        cout<<"\nEl numero "<<dato<<" no estaba en el arreglo."<<endl;
    }

    getch();
    return 0;
}