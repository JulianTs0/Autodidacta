#include <iostream>
#include <conio.h>

using namespace std;

void al_cuadrado (float a);

float num;

int main (){
	
	cout<<"Digite un nombre para elevarlo al cuadrado";
	cin>>num;
	al_cuadrado(num);
	
	getch();
	return 0;
}

void al_cuadrado (float a){
	float result;
	result = a * a;
	cout<<"El resultado de la elevacion es :"<<result;
	 
}
