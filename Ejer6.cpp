#include <iostream>

using namespace std;

int main () {
	
	float a,b,c,d, fin = 0;
	
	cout<<"Ingrese la nota de un alumno: ";cin>>a;
	cout<<"Ingrese la nota de otro alumno: ";cin>>b;
	cout<<"Ingrese la nota de otro alumno: ";cin>>c;
	cout<<"Ingrese la nota del ultimo alumno: ";cin>>d;
	
	fin = (a+b+c+d) / 4;
	
	cout<<"La nota media es de : "<<fin;
		
		
	return 0;
}
