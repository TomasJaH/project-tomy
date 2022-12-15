#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct info_direccion{
    char direccion[40];
    char ciudad[40];
    char departamento[40];
};

struct empleado{
    char nombre[40];
    struct info_direccion dir_empleado;
    double salario;
}empleados[100];

int main(){

    int n;

    cout<<"Ingresa el numero de empleados a registrar: ";
    cin>>n;

    for(int i=0;i<n;i++){
        fflush(stdin); //Vaciar el buffer.
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,40,'\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion,40,'\n');
        cout<<"Ingrese su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,40,'\n');
        cout<<"Ingrese su departamento: ";
        cin.getline(empleados[i].dir_empleado.departamento,40,'\n');
        cout<<"Ingrese su salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }

    //Imprimir datos

    for(int i=0;i<n;i++){
        cout<<"\n---Empleado "<<i+1<<"---\n";
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Departamento: "<<empleados[i].dir_empleado.departamento<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
    }



    getch();
    return 0;
}