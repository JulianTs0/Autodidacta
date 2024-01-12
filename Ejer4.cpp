#include <iostream>

using namespace std;

int main (){
	
	float a,b,c,d,res = 0;
	
	cout<<"Ingrese los dos primeros numeros: \n";cin>>a;cin>>b; 
	cout<<"Ingrese los dos ultimos numeros:  \n";cin>>c;cin>>d; 
	
	res = (a+b) / (c+d);
	
	cout.precision(2);
	cout<<"\nEl resultado es : "<<res;
	
	b = atof("hpña");
	
	cout<<"\nEl resultado es : "<<a<<b;
	return 0;
}
