#include <iostream>

using namespace std;

int main(){

    int num1,num2,num3,num4;

    cout<<"Ingrese los 3 primeros numeros: \n";
    cin>>num1>>num2>>num3;

    cout<<"Ingrese el numero a comparar: ";
    cin>>num4;

    if(num4 == num1 || num4 == num2 || num4 == num3){
        cout<<"El numero coincide con alguno de los valores"<<endl;
    } else {
        cout<<"El numero no coincide con ninguno de los valores"<<endl;
    }


    return 0;
}