#include <iostream>
#include <conio.h>

using namespace std;

void pedirmatriz();
void menormatriz(int m[][100],int,int);

int m[100][100],nfila,ncol;

int main (){
	
	pedirmatriz();
	menormatriz(m,nfila,ncol);
	
	getch();
	return 0;
}

void pedirmatriz(){
	cout<<"Cuantas filas quiere que tenga la matriz";
	cin>>nfila;
	cout<<"Cuantas columnas quiere que tenga la matriz";
	cin>>ncol;
	
	for(int i=0;i<nfila;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Rellene la matriz la cual esta en la pos "<<i<<" "<<j<<"\n";
			cin>>m[i][j];
		}
	}
}

void menormatriz(int m[][100],int nfila,int ncol){
	int aux,min = 99999;
	
	cout<<"A cual fila quiere que se le devuelva el menor valor?";
	cin>>aux;
	
	for(int i=0;i<nfila;i++){
			for(int j=0;j<ncol;j++){
				if(i == aux){
					if(m[i][j] < min){
					min = m[aux][j];
				}	
			}
				
		}
	
		
	}
	
	cout<<"El valor mas bajo de la fila "<<aux<<" es : \n "<<min;	
	
}
