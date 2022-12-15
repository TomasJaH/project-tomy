#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], numeros2[100][100],f,c, multiplicador;

    cout<<"Indique el numero de filas: ";
    cin>>f;

    cout<<"Indique el numero de columnas: ";
    cin>>c;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"Digite el elemento de la fila "<<i<<" y la columna "<<j<<": ";
            cin>>numeros[i][j];
        }
    }

    cout<<"Indique por cuanto quiere multiplicar los elementos de la matriz: ";
    cin>>multiplicador;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            numeros2[i][j] = (numeros[i][j]*multiplicador);
        }
    }

    cout<<"\nMatriz multiplicada por "<<multiplicador<<": "<<endl;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<numeros2[i][j];
        }
        cout<<"\n";
    }


    getch();
    return 0;
}