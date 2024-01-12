#include <iostream>
#include <conio.h>

using namespace std;

void cambio(int num,int&,int&,int&,int&,int&,int&);

int main(){
	bool ha = true;
	int num, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
	cout<<"Ingrese una cantidad de dolares";
	cin>>num;
	cambio(num,cien,cincuenta,veinte,diez,cinco,uno);
	cout<<"Esa cantidad tiene: \n";
	cout<<"Billetes de cien: "<<cien<<"\n";
	cout<<"Billetes de cincuenta: "<<cincuenta<<"\n";
	cout<<"Billetes de veinte : "<<veinte<<"\n";
	cout<<"Billetes de diez : "<<diez<<"\n";
	cout<<"Billetes de cinco : "<<cinco<<"\n";	
	cout<<"Billetes de uno : "<<uno<<"\n";	
	getch();
	return 0;
}

void cambio(int num, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	int aux;
	
		aux = num / 100;
		cien = aux;
		num %= 100;
	
		aux = num / 50;
		cincuenta = aux;
		num %= 50;
		
		aux = num / 20;
		veinte = aux;
		num %= 20;
		
		aux = num / 10;
		diez = aux;
		num %= 10;
	
		aux = num / 5;
		cinco = aux;
		num %= 5;

		aux = num / 1;
		uno = aux;
		num %= 1;
	
}
