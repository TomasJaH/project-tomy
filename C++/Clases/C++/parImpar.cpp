#include <iostream>

using namespace std;

int main(){

    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    if(numero==0) {
        cout<<"El numero es 0"<<endl;
    }else if(numero%2==0){
        cout<<"El numero es par"<<endl;
    } else {
        cout<<"El numero es impar"<<endl;
    }

    return 0;
}