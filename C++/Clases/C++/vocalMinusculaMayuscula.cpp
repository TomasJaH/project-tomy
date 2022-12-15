#include <iostream>

using namespace std;

int main(){

    char letra;

    cout<<"Ingrese una vocal: "; cin>>letra;

    switch(letra){
        case 'a': cout<<"Es minuscula"<<endl; break;
        case 'e': cout<<"Es minuscula"<<endl; break;
        case 'i': cout<<"Es minuscula"<<endl; break;
        case 'o': cout<<"Es minuscula"<<endl; break;
        case 'u': cout<<"Es minuscula"<<endl; break;
        default: cout<<"Es una vocal MAYUSCULA"<<endl; break;
    }

    return 0;
}