#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros1[3][3] = {1,2,3,4,5,6,7,8,9};
    int numeros2[3][3] = {1,2,3,4,5,6,7,8,9};
    int numeros3[3][3], suma = 0;

    cout<<"Matriz 1: \n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros1[i][j]<<' ';
        }
        cout<<"\n";
    }

    cout<<"\n\nMatriz 2: \n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros2[i][j]<<' ';
        }
        cout<<"\n";
    }

    cout<<"\n\nSuma Matriz 1 y Matriz 2: \n";

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            numeros3[i][j] = (numeros1[i][j] + numeros2[i][j]);
            suma += (numeros1[i][j] + numeros2[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<numeros3[i][j]<<' ';
        }
        cout<<"\n";
    }

    cout<<"\nSuma de los elementos de las dos matrices: "<<suma<<endl;

    getch();
    return 0;
}