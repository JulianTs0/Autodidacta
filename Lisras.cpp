#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregar(Nodo *&, int);
void mostrar (Nodo *);
void promedio (Nodo *,int);

int main(){
	Nodo *lista = NULL;
	int aux,n;
	cout<<"Cuantos elementos quiere que tenga su lista?";
	cin>>aux;
	for(int i=0;i<aux;i++){
		cout<<"Ingrese un valor a la lista";
		cin>>n;
		agregar(lista,n);
	}
	mostrar(lista);
	promedio(lista,aux);
	getch();
	return 0;
}

void agregar (Nodo *& lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}
	if(lista == aux1){
		lista = nuevo_nodo;
	} else {
		aux2 -> siguiente = nuevo_nodo;
	}
	
	nuevo_nodo -> siguiente = aux1;
}

void mostrar(Nodo *lista){
	while (lista != NULL){
		cout<<lista -> dato<<" -> ";
		lista = lista -> siguiente;
		
	}
}

void promedio (Nodo *lista,int aux){
	float prom = 0;
	while (lista != NULL){
		prom = prom + lista -> dato;
		lista = lista -> siguiente;
	}
	prom = prom / aux;
	cout<<"El promedio de los numeros de la lista es : "<<prom;
}
