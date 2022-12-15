#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int n, suma = 0, cuadrado;

    cout<<"Digite un numero: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cuadrado = i * i;
        suma += cuadrado; // suma = suma + cuadrdo
    }

    cout<<"La suma de los cuadrados es de: "<<suma<<endl;

    getch();
    return 0;
}