#include <iostream>

using namespace std;

int main(){

    int numero;

    cout<<"Ingrese un numero: "; cin>>numero;

    if(numero == 0){
        cout<<"El numero es 0"<<endl;
    } else if(numero > 0){
        cout<<"El numero es positivo"<<endl;
    } else {
        cout<<"El numero es negativo"<<endl;
    }

    return 0;
}