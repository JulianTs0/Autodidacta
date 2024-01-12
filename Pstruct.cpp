#include <iostream>
#include <conio.h>

using namespace std;

struct cicl{
	int horas;
	int mins;
	int segs;
}etapa1[4],*etapa_p = etapa1;

void PedirDatos();
void calcular(cicl *);

int main(){
	
	PedirDatos();
	calcular(etapa_p);
	
	cout<<"Este es el tiemo de las 3 etapas \n";
	cout<<"Horas : "<<(etapa_p+3)->horas<<"\n";
	cout<<"Mins : "<<(etapa_p+3)->mins<<"\n";
	cout<<"Segs : "<<(etapa_p+3)->segs<<"\n";
	
	getch();
	return 0;
}

void PedirDatos(){
	for(int i=0;i<3;i++){
		cout<<"Ingrese las horas de la etapa "<<i<<"\n";
		cin>>(etapa_p+i)->horas;
		cout<<"Ingrese los minutos de la etapa "<<i<<"\n";
		cin>>(etapa_p+i)->mins;
		cout<<"Ingrese los segundos de la etapa "<<i<<"\n";
		cin>>(etapa_p+i)->segs;
	}
	
}

void calcular(cicl *etapa_p){
		int aux =0;
		(etapa_p+3) -> segs = 0;
		(etapa_p+3) -> mins = 0;
 		(etapa_p+3) -> horas = 0;
 		
	for(int i=0;i<3;i++){
		(etapa_p+3) -> segs += (etapa_p+i) -> segs;
		(etapa_p+3) -> mins += (etapa_p+i) -> mins;
		(etapa_p+3) -> horas+= (etapa_p+i) -> horas;
	}	
	if((etapa_p+3) -> segs > 60){
		aux = (etapa_p+3) -> segs / 60;
		(etapa_p+3) -> segs %= 60;
	}
	(etapa_p+3) -> mins += aux;
	if((etapa_p+3) -> mins > 60){
		aux = (etapa_p+3) -> mins / 60;
		(etapa_p+3) -> mins %= 60;
	}
	(etapa_p+3) -> horas += aux;
	
}
