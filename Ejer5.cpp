#include <iostream>

using namespace std;

int main(){
	
	float a,b,c,d,res = 0;
	
	cout<<"ingrese el nuumero a : ";cin>>a;
	cout<<"ingrese el nuumero b : ";cin>>b;
	cout<<"ingrese el nuumero c : ";cin>>c;
	cout<<"ingrese el nuumero d : ";cin>>d;
	
	res = a + (b / (c-d));
	
	cout<<"El resultado es : "<<res;
	
	return 0;
}
