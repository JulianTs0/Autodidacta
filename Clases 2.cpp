#include <iostream>
#include <conio.h>

using namespace std;

class Tiempo {
	private:
		int seg=0;
		int min=0;
		int hs=0;
	public:
		Tiempo(int,int,int);
		Tiempo(int);
		void mostrarTiempo();
};

Tiempo::Tiempo(int Hs, int Min, int Seg){
	seg = Seg;
	min = Min;
	hs = Hs;
}

Tiempo::Tiempo(int segundos){
	if(segundos > 3600){
		hs = segundos / 3600;
	}
	if((segundos % 3600) > 60){
		min = (segundos % 3600) / 60;
	}
	
	seg = (segundos % 3600) % 60;
}

void Tiempo::mostrarTiempo(){
	cout<<hs<<":"<<min<<":"<<seg;
}
int main(){
	
	Tiempo t1 = Tiempo(20,30,4);
	Tiempo t2 = Tiempo(78950);
	t1.mostrarTiempo();
	cout<<"\n";
	t2.mostrarTiempo();
	
	getch();
	return 0;
}
