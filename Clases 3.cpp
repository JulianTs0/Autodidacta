#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Persona{
	private:
		string Nombre;
		int Edad,Altura;
		char Sexo;
	public: 
		Persona(string,int,int,char);
		void MostrarDatosP();
};

class Empleado : public Persona{
	private:
		string Trabajo;
		int Sueldo;
	public: 
		Empleado(string,int,int,char,string,int);
		void MostrarDatosE();
};

class Alumno : public Persona{
	private:
		int NotaFinal;
	public: 
		Alumno(string,int,int,char,int);
		void MostrarDatosA();
};

class Universitario : public Alumno{
	private:
		string Universidad;
	public:
		Universitario(string,int,int,char,int,string);
		void MostrarDatosU();
};

Persona::Persona(string Nombre_,int Edad_,int Altura_,char Sexo_){
	Nombre = Nombre_;
	Edad = Edad_;
	Altura = Altura_;
	Sexo = Sexo_;
}

void Persona::MostrarDatosP(){
	cout<<"Nombre : "<<Nombre<<endl;
	cout<<"Edad : "<<Edad<<endl;
	cout<<"Altura : "<<Altura<<endl;
	cout<<"Sexo : "<<Sexo<<endl;
	
}

Empleado::Empleado(string Nombre_,int Edad_, int Altura_, char Sexo_, string Trabajo_, int Sueldo_): Persona(Nombre_,Edad_,Altura_,Sexo_){
	Trabajo = Trabajo_;
	Sueldo = Sueldo_;
}

void Empleado::MostrarDatosE(){
	MostrarDatosP();
	cout<<"Trabajo : "<<Trabajo<<endl;
	cout<<"Sueldo : "<<Sueldo<<endl;
}

Alumno::Alumno(string Nombre_,int Edad_, int Altura_, char Sexo_, int NotaFinal_): Persona(Nombre_,Edad_,Altura_,Sexo_){
	NotaFinal = NotaFinal_;
}

void Alumno::MostrarDatosA(){
	MostrarDatosP();
	cout<<"Nota final : "<<NotaFinal<<endl;
}
Universitario::Universitario(string Nombre_,int Edad_,int Altura_,char Sexo_,int NotaFinal_,string Universidad_):Alumno(Nombre_,Edad_,Altura_,Sexo_,NotaFinal_){
	Universidad = Universidad_;
}
void Universitario::MostrarDatosU(){
	MostrarDatosA();
	cout<<"Universidad : "<<Universidad<<endl;
}
int main(){
	Persona p1 = Persona ("Julian",17,180,'M');
	Alumno a1 = Alumno ("Mateo",16,186,'M',8);
	Empleado e1 = Empleado ("Lucia",25,179,'F',"Cartero",20000);
	Universitario u1 = Universitario ("Lucas",19,186,'M',9,"UTN");
	
	p1.MostrarDatosP();
	cout<<"\n";
	a1.MostrarDatosA();
	cout<<"\n";
	e1.MostrarDatosE();
	cout<<"\n";
	u1.MostrarDatosU();
	cout<<"\n";
	getch();
	return 0;
}
