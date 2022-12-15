#include<iostream>
#include<conio.h>

using namespace std; 

int main(){
	
	int n, numeros[100],mayor=0, suma =0, sumat = 0; 
	
	cout<<"\t\t\tPrograma que calcula si un numero es la suma de los demas en un vector. \n"<<endl;
	cout<<"Digita la cantidad de elementos de tu vector: "<<endl; cin>>n; 
	
	for(int i=0; i<=n; i++){
		
		cout<<"\nDigita un numero: "; cin>>numeros[i]; 
		
		if(numeros[i] > mayor){
			mayor = numeros[i]; 
		}
		suma += numeros[i]; 
	}

	sumat = suma - mayor; 
	if(sumat == mayor){
	 
	cout<<"La sumatoria de los demas elementos si es igual\n";
	cout<<"Elemento ["<<mayor<<"] ---> "<<sumat<<". \nSe cumple la sumatoria."<<endl; 
	
	}
	else {
		cout<<"la sumatoria no es igual. "<<endl;
	}
	
	return 0; 
	getch(); 
	
}