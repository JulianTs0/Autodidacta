#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nombre [50];
	
	cout<<"Ingrese una palabra";
	cin.getline(nombre,50,'\n');
	if(strlen(nombre)>10){
		cout<<nombre;
	} else {
		
	}
	
	
	
	getch();
	return 0;
}

