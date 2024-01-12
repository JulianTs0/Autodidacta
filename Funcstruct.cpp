#include <iostream>
#include <conio.h>

using namespace std;

struct fecha{
	int dia;
	int mes;
	int ano;
}f1,f2,ff;

fecha mayor(fecha,fecha,fecha);
void pedirdatos();

int main (){
	
	pedirdatos();
	fecha final = mayor(f1,f2,ff);
	
	cout<<"La fecha mas reciente es :"<<final.dia<<"/"<<final.mes<<"/"<<final.ano;
	
	
	getch();
	return 0;
}

void pedirdatos(){
	
	cout<<"Ingrese la primnera fecha \n";
	cout<<"Año: ";
	cin>>f1.ano;
	cout<<"Mes: ";
	cin>>f1.mes;
	cout<<"Dia: ";
	cin>>f1.dia;
	
	cout<<"\n Ingrese la segunda fecha \n";
	cout<<"Año: ";
	cin>>f2.ano;
	cout<<"Mes: ";
	cin>>f2.mes;
	cout<<"Dia: ";
	cin>>f2.dia;
	
}

fecha mayor (fecha f1, fecha f2, fecha ff){
	
	if(f1.ano > f2.ano){
		ff.ano = f1.ano;
		ff.mes = f1.mes;
		ff.dia = f1.dia;
	} else if (f1.ano < f2.ano){
		ff.ano = f2.ano;
		ff.mes = f2.mes;
		ff.dia = f2.dia;
	} else if (f1.ano == f2.ano){
		if(f1.mes > f2.mes){
		ff.ano = f1.ano;
		ff.mes = f1.mes;
		ff.dia = f1.dia;
	} else if (f1.mes < f2.mes){
		ff.ano = f2.ano;
		ff.mes = f2.mes;
		ff.dia = f2.dia;
	} else if (f1.mes == f2.mes){
		if(f1.dia > f2.dia){
		ff.ano = f1.ano;
		ff.mes = f1.mes;
		ff.dia = f1.dia;
	} else if (f1.dia < f2.dia){
		ff.ano = f2.ano;
		ff.mes = f2.mes;
		ff.dia = f2.dia;
		}
	}
}
	
	return ff;
	
}
