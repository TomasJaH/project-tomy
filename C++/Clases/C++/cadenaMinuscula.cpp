#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[100];

    cout<<"Ingrese una palabra: ";
    cin.getline(palabra,100,'\n');

    strlwr(palabra);

    cout<<"La palabra en mayusculas es: "<<palabra<<endl;
    
    getch();
    return 0;
}