#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int n, factorial = 1, resultado = 0;

    cout<<"Ingrese un numero: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        factorial *= i;
        resultado += factorial;
    }

    cout<<"El resultado es: "<<resultado<<endl;

    getch();
    return 0;
}