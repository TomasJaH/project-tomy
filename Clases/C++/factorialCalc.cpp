#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numero, factorial = 1;

    cout<<"Digite un numero: ";
    cin>>numero;

    for(int i=1;i<=numero;i++){
        factorial *= i;
    }

    cout<<"El factorial del numero "<<numero<<" es: "<<factorial<<endl;

    getch();
    return 0;
}