//Una matriz es simetrica cuando es cuadrada (3*3, 2*2, etc..) y si es igual a su matriz transpuesta

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100],f,c;
    char band = 'F';

    cout<<"Digite el numero de filas: ";
    cin>>f;

    cout<<"Digite el numero de columnas: ";
    cin>>c;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"Digite el elemento de la fila "<<i+1<<" y la columna "<<j+1<<": ";
            cin>>numeros[i][j];
        }
    }

    if(f==c){
        for(int i=0;i<f;i++){
            for(int j=0;j<c;j++){
                if(numeros[i][j] == numeros[j][i]){
                    band = 'V';
                }
            }
        }
    }

    if(band == 'V'){
        cout<<"\nLa matriz es simetrica"<<endl;
    } else{
        cout<<"La matriz no es simetrica"<<endl;
    }

    getch();
    return 0;
}