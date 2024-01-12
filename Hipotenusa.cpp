#include <iostream>
#include <math.h>

using namespace std;

int main (){
	
	float c1,c2,h;
	
	cout<<"Ingrese la longitud de los dos catetos: \n";cin>>c1;cin>>c2;
	
	h = sqrt(pow(c1,2)+ pow(c2,2));
	
	cout<<"La hipotenusa es de : "<<h;
	
	
	
	return 0; 
}
