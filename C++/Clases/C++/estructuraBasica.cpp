#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct album{
        char nombreA[40];
        char artista[40];
        int numeroCanciones;
        char fecha[40];
        char plataformas[40];
    }
siempreB = {"Siempre Blessd","Blessd",13,"13 de Noviembre, 2022","Spotify y Youtube"},
unVerano = {"Un verano sin ti","Bad Bunny",23,"6 de Mayo, 2022","Spotify y Youtube"},
microD = {"Microdosis","Mora",15,"1 de Abril, 2022","Spotify y Youtube"},creaAlbum;

int main(){

    cout<<"Crea tu album: "<<endl;

    cout<<"\nEscribe el nombre del album: "<<endl;
    cin.getline(creaAlbum.nombreA,40,'\n');
    cout<<"Escribe el artista: "<<endl;
    cin.getline(creaAlbum.artista,40,'\n');
    cout<<"Escribe el numero de canciones: "<<endl;
    cin>>creaAlbum.numeroCanciones;
    cout<<"Cuando es la fecha de lanzamiento: "<<endl;
    cin.getline(creaAlbum.fecha,40,'\n');
    cout<<" Cuales son las plataformas de salida: "<<endl;
    cin.getline(creaAlbum.plataformas,40,'\n');

    cout<<"\n\n\n\nTu nuevo album: \n";

    cout<<"Album: "<<creaAlbum.nombreA<<endl;
    cout<<"Artista: "<<creaAlbum.artista<<endl;
    cout<<"Numero de canciones: "<<creaAlbum.numeroCanciones<<endl;
    cout<<"Fecha de lanzamiento: "<<creaAlbum.fecha<<endl;
    cout<<"Plataformas de salida: "<<creaAlbum.plataformas<<endl;

    cout<<"\n---OTROS ALBUMES---"<<endl;

    cout<<"Album: "<<siempreB.nombreA<<endl;
    cout<<"Artista: "<<siempreB.artista<<endl;
    cout<<"Numero de canciones: "<<siempreB.numeroCanciones<<endl;
    cout<<"Fecha de lanzamiento: "<<siempreB.fecha<<endl;
    cout<<"Plataformas de salida: "<<siempreB.plataformas<<endl;

    cout<<"\nAlbum: "<<unVerano.nombreA<<endl;
    cout<<"Artista: "<<unVerano.artista<<endl;
    cout<<"Numero de canciones: "<<unVerano.numeroCanciones<<endl;
    cout<<"Fecha de lanzamiento: "<<unVerano.fecha<<endl;
    cout<<"Plataformas de salida: "<<unVerano.plataformas<<endl;

    cout<<"\nAlbum: "<<microD.nombreA<<endl;
    cout<<"Artista: "<<microD.artista<<endl;
    cout<<"Numero de canciones: "<<microD.numeroCanciones<<endl;
    cout<<"Fecha de lanzamiento: "<<microD.fecha<<endl;
    cout<<"Plataformas de salida: "<<microD.plataformas<<endl;


    getch();
    return 0;
}