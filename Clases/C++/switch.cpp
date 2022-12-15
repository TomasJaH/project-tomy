#include <iostream>

using namespace std;

int main(){

    int numero;

    cout<<"Digite un numero entre 1-5: ";
    cin>>numero;

    switch (numero)
    {
    case 1:
        cout<<"Has escrito 1";
        break;
    
    case 2:
        cout<<"Has escrito 2";
        break;
    
    case 3:
        cout<<"Has escrito 3";
        break;
    
    case 4:
        cout<<"Has escrito 4";
        break;
    
    case 5:
        cout<<"Has escrito 5";
        break;
    
    default:
        cout<<"No has ingresado un numero valido";
        break;
    }


    return 0;
}