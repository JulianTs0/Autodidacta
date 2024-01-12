#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	
	char palabra1[30], palabra2[30];
	
	cout<<"Ingrese una palabra";
	cin.getline(palabra1,30,'\n');
	cout<<"Ingrese otra palabra";
	cin.getline(palabra2,30,'\n');
	
	if(strcmp(palabra1,palabra2) == 0){
		cout<<"Las dos palabras son iguales";
	} else if(strcmp(palabra1,palabra2) > 0){
		cout<<"La primera palabra es mayor alfabeticamente";
	} else {
		cout<<"La segunda palabra es mayor alfabeticamente";
	}
	
	
	getch();
	return 0;
}
