#include <iostream>

using namespace std;

int main(){
    int x,y,aux;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;
    cout<<"\nValor X normal: "<<x<<endl;
    cout<<"\nValor Y normal: "<<y<<endl;
    
    aux = y;
    y = x;
    x = aux;

    cout<<"\nValor X invertido: "<<x<<endl;
    cout<<"\nValor Y invertido: "<<y<<endl;

    return 0;
}