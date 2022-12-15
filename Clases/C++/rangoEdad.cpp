#include <iostream>

using namespace std;

int main(){

    int edad;

    cout<<"Digite su edad: "; cin>>edad;

    if(edad >= 18 && edad <= 25){
        cout<<"Rango 18-25"<<endl;
    } else if(edad < 18){
        cout<<"Eres menor de 18"<<endl;
    } else {
        cout<<"Eres mayor de 18"<<endl;
    }

    return 0;
}