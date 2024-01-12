#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int matriz1[3][3],matriz2[3][3],aux,matriz3[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"ingrese el numero de la posicion para la primera matriz "<<i<<" "<<j<<" "<<"\n";
			cin>>aux;
			matriz1[i][j] = aux;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"ingrese el numero de la posicion para la segunda matriz "<<i<<" "<<j<<" "<<"\n";
			cin>>aux;
			matriz2[i][j] = aux;
		}
	}
  cout<<"La suma de las dos matrizes es: ";
	for(int i=0;i<3;i++){
		cout<<"\n";
		for(int j=0;j<3;j++){
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			cout<<matriz3[i][j];
			cout<<" ";
		}
	}




	getch();
	return 0;
}
