#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char nombre[100],reves[100];

    cout<<"Ingresa una palabra polindroma (que se lea igual al reves): ";
    cin.getline(nombre,100,'\n');

    strcpy(reves,nombre);
    strrev(reves);

    if(strcmp(nombre,reves)==0){
        cout<<"La palabra es polindroma"<<endl;
    }else{
        cout<<"La palabra no es polindroma"<<endl;
    }

    getch();
    return 0;
}