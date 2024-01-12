#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int n = 0,suma = 0;
	
	cout<<"Ingrese el numero n para calcular la suma de los impares";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i % 2 == 1){
			suma += i;
		}
	}
	cout<<"El resultado de la suma es: "<<suma;
	
	
	getch();
	return 0;
}
