#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Rectangulo {
	private:
		int largo;
		int ancho;
	public:
		Rectangulo(int,int);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(int _largo,int _ancho){
	largo = _largo;
	ancho = _ancho;
}

void Rectangulo::perimetro(){
	int aux;
	aux = (2*(largo) + 2*(ancho));
	cout<<"El perimtro del rectangulo es "<<aux;
}
void Rectangulo::area(){
	int aux;
	aux = ancho * largo;
	cout<<"El area del rectangulo es "<<aux;
}

int main(){
	Rectangulo r1 = Rectangulo(30,25);
	r1.area();
	cout<<"\n";
	r1.perimetro();
	getch();
	return 0;
}
