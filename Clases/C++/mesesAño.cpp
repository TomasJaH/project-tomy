#include <iostream>

using namespace std;

int main(){

    int mes;

    cout<<"Ingrese un mes [1-12]: ";
    cin>>mes;

    switch(mes){
        case 1: cout<<"El mes corresponde a: Enero"<<endl; break;
        case 2: cout<<"El mes corresponde a: Febrero"<<endl; break;
        case 3: cout<<"El mes corresponde a: Marzo"<<endl; break;
        case 4: cout<<"El mes corresponde a: Abril"<<endl; break;
        case 5: cout<<"El mes corresponde a: Mayo"<<endl; break;
        case 6: cout<<"El mes corresponde a: Junio"<<endl; break;
        case 7: cout<<"El mes corresponde a: Julio"<<endl; break;
        case 8: cout<<"El mes corresponde a: Agosto"<<endl; break;
        case 9: cout<<"El mes corresponde a: Septiembre"<<endl; break;
        case 10: cout<<"El mes corresponde a: Octubre"<<endl; break;
        case 11: cout<<"El mes corresponde a: Noviembre"<<endl; break;
        case 12: cout<<"El mes corresponde a: Diciembre"<<endl; break;
        default: cout<<"Has elegido un numero incorreco"<<endl; break;
    }

    return 0;
}