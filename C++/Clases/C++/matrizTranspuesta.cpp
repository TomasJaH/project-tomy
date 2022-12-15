#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], n;

    cout<<"Indique de cuanto quiere que sea la matriz (n*n): ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Digite un numero ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>numeros[i][j];
        }
    }

    cout<<"Matriz Original: \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<numeros[i][j]<<' ';
        }
        cout<<"\n";
    }

    cout<<"\nMatriz Transpuesta: \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<numeros[j][i]<<' ';
        }
        cout<<"\n";
    }

    getch();
    return 0;
}