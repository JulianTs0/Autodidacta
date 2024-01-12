#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	
	char string [] = "Hola que tal ";
	char nombre [30];
	
	cout<<"Cual es tu nombre?";
	cin.getline(nombre,30,'\n');
	 
	strcat(string,nombre);
	
	cout<<string;
	

	getch();
	return 0;
}
