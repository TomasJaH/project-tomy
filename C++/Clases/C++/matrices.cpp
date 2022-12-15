#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100],f,c;

    cout<<"Ingrese el numero de filas: ";
    cin>>f;

    cout<<"Ingrese el numero de columnas: ";
    cin>>c;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"Digite el elemnento de la fila "<<i+1<<" y la columna "<<j+1<<": ";
            cin>>numeros[i][j];
        }
    }

    cout<<"\nMatriz: \n";

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}