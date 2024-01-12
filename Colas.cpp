#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Cliente{
	int Edad;
	char Nombre[10];
	char Sexo;
};
struct Nodo{
	Cliente n;
	Nodo *siguiente;
};

void CrearCliente(Cliente &);
void Agregar (Nodo *&, Nodo *&, Cliente);
void Sacar (Nodo *&, Nodo *&, Cliente &);
bool Vacio (Nodo *);


int main(){
	int aux;
	Cliente x;
	Nodo *Frente = NULL;
	Nodo *Fin = NULL;
	
	cout<<"Cuantos clientes quiere que tenga la cola? \n";
	cin>>aux;
	for(int i=0;i<aux;i++){
		CrearCliente(x);
		Agregar(Frente,Fin,x);
	}
	cout<<"Sacando clientes de la cola \n";
	
	for(int i=0;i<aux;i++){
		Sacar(Frente,Fin,x);
		cout<<x.Nombre<<"\n"<<x.Edad<<"\n"<<x.Sexo<<"\n\n";
	}
	
	
	
	getch();
	return 0;
}

void Agregar (Nodo *& Frente, Nodo *& Fin, Cliente n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo ->n = n;
	nuevo_nodo ->siguiente = NULL;
	
	if(Vacio(Frente)){
		Frente = nuevo_nodo;
	} else {       
		Fin -> siguiente = nuevo_nodo;
	}            
	Fin = nuevo_nodo;
		
}
 void Sacar(Nodo *& Frente, Nodo *& Fin, Cliente &n){
 
 	
 	n = Frente -> n;
 	Nodo *aux = Frente;
 	
 	if(Frente == Fin){
 		Frente == NULL;
 		Fin == NULL;
 	} else {
 		Frente = Frente -> siguiente;
 	}
 	delete aux;
 	
 }
 bool Vacio(Nodo *Frente){
 	return(Frente == NULL)? true : false;
 }
 void CrearCliente(Cliente &x){
 	fflush(stdin);
 	cout<<"Digite el nombre del cliente \n";
 	cin.getline(x.Nombre,10,'\n');
 	cout<<"Digite la edad del cliente \n";
 	cin>>x.Edad;
 	cout<<"Digite el sexo del cliente \n";
 	cin>>x.Sexo;
 }
