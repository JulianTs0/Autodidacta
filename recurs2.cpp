#include <iostream>
#include <conio.h>

using namespace std;

void escribeNumeros(int, int);

int main (){
	int x,y;
	
	cout<<"Escriba un numero inicial";
	cin>>x;
	cout<<"Escriba un numero final";
	cin>>y;
	escribeNumeros(x,y);
	
	getch();
	return 0;
}

void escribeNumeros(int ini, int fin){
	
	if(ini < fin){
		cout<<ini;
		cout<<"\n";
	    escribeNumeros(ini+1,fin);
	} else if (ini > fin){
		cout<<ini;
		cout<<"\n";
	    escribeNumeros(ini-1,fin);
	} else if(ini == fin){
		cout<<fin;
		return;
	}

	
	
}
