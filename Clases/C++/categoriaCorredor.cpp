#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct corredor{
    char nombre[40];
    int edad;
    char sexo[40];
}corredores[100];

int main(){

    int n;

    cout<<"Ingrese el numero de corredores a registrar: ";
    cin>>n;

    for(int i=0;i<n;i++){
        rewind(stdin);
        cout<<"\nRegistar corredor "<<i+1<<": "<<endl;
        cout<<"Ingrese el nombre: ";
        cin.getline(corredores[i].nombre,40,'\n');
        cout<<"Ingrese el sexo: ";
        cin.getline(corredores[i].sexo,40,'\n');
        cout<<"Ingrese la edad: ";
        cin>>corredores[i].edad;
        
    }

    for(int i=0;i<n;i++){
        cout<<"\n---Corredor "<<i+1<<"---\n";
        cout<<"Nombre: "<<corredores[i].nombre<<endl;
        cout<<"Edad: "<<corredores[i].edad<<endl;
        cout<<"Sexo: "<<corredores[i].sexo<<endl;

        if(corredores[i].edad<=18){
            cout<<"Ha quedado en la categoria: Juvenil"<<endl;
        }else if(corredores[i].edad>18 && corredores[i].edad<=40){
            cout<<"Ha quedado en la categoria: Adulto"<<endl;
        }else{
            cout<<"Ha quedado en la categoria: Veterano"<<endl;
        }
    }

    getch();
    return 0;
}