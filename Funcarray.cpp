#include <iostream>
#include <conio.h>

using namespace std;


int vec[100],tam,veci[100],tami=0;

void pedirdatos();
void mostrarimpares(int vec[],int,int veci[],int);

int main (){
	pedirdatos();
	mostrarimpares(vec,tam,veci,tami);
	
	getch();
	return 0;
}

void pedirdatos (){
	
	cout<<"Cuanto va a ser el tamaño de la lista que quiere ver \n";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Ingrese un numero";
		cin>>vec[i];
	}
	
}

void mostrarimpares(int vec[],int tam, int veci[], int tami){
	
	int aux=0;
	
	for(int i=0;i<tam;i++){
		if((vec[i] % 2) != 0 ){
			veci[i] = vec[i];
		}
	}
	for(int i=0;i<tam;i++){
		if(veci[i] == 0){
			
		} else {
		cout<<veci[i]<<"\n";
		}
		
		
	}
	
}
