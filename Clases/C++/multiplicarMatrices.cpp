#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros1[100][100], numeros2[100][100], numeros3[100][100],n;

    cout<<"Indique de que tamaño van a ser las dos matrices (n*n): ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Digite el elemento de la matriz 1 de la fila "<<i+1<<" y la columna "<<j+1<<": ";
            cin>>numeros1[i][j];

            cout<<"Digite el elemento de la matriz 2 de la fila "<<i+1<<" y la columna "<<j+1<<": ";
            cin>>numeros2[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            numeros3[i][j] = (numeros1[i][j] * numeros2[i][j]);
        }
    }

    cout<<"\nMatriz 1: \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<numeros1[i][j]<<' ';
        }
        cout<<"\n";
    }

    cout<<"\nMatriz 2: \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<numeros2[i][j]<<' ';
        }
        cout<<"\n";
    }

    cout<<"\nProducto de las matrices 1 y 2: \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<numeros3[i][j]<<' ';
        }
        cout<<"\n";
    }

    getch();
    return 0;
}