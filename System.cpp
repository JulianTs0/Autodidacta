#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct clientes {
	char nombre[10];
	char apellido[10];
	int edad;
	int password;
	int dni;
	char provincia[20];
}cliente_p,
 cliente1 = {"Matias","Herrera",20,5467,40098345,"Cordoba"},
 cliente2 = {"Lucia","Torres",32,1234,36022714,"Santa Fe"},
 cliente3 = {"Jose","Dominguez",45,9901,32987126,"Buenos Aires"};

struct CuentaBancaria{
	int saldo;
	int interes;
}
cuenta_p = {0,12}, 
 cuenta1 = {1000,5},
 cuenta2 = {20000,0},
 cuenta3 = {10000,15};
									
int main(){
	
	char aux4[10],opc[10],aux1[10],aux41[10];
	int Master = 1,sub4 = 1,opci,sub1 = 1, sub11 = 1,auxpss, sub12 = 1, aux12, CB = 0,sub121 = 1, aux121,ingreso,regreso,aux13,aux4141;
	
	
	while(Master == 1){
		sub4 = 1;
		cout<<"Bienvenido al sistema virtual de Economix\n";
		cout<<"  De que forma quiere ingresar?	\n\n";
		cout<<"   1. Cliente	\n";
		cout<<"   2. Empleado	\n";
		cout<<"   3. Gerente	\n";
		cout<<"   4. Deseo salir del sistema	\n";
		cin.getline(opc,10,'\n');
		opci = atoi(opc);
	
		switch(opci){
			case 1:
			while(sub1 == 1){
			system("cls");
			cout<<"Antes de empezar es usted un nuevo cliente?\n";
			cin.getline(aux1,10,'\n');
			strlwr(aux1);
			if(strcmp(aux1,"si") == 0){
					cout<<"Bienvenido a nuestro sistema antes de ingresar debe \nregistrase en nuestro sistema le pediremos algunos datos \n";
					cout<<"Ingrese su Nombre :";
					cin.getline(cliente_p.nombre,10,'\n');
					cout<<"Ingrese su Apellido :";
					cin.getline(cliente_p.apellido,10,'\n');
					cout<<"Ingrese su edad :";
					cin>>cliente_p.edad;
					cout<<"Ingrese su DNI :";
					cin>>cliente_p.dni;
					fflush(stdin);
					cout<<"Ingrese en al provincia donde nacio :";
					cin.getline(cliente_p.provincia,20,'\n');
					
					while(sub11 == 1){
					cout<<"Por ultimo ingrese su contraseña la cual debe ser de 4 numeros \n";
					cin>>cliente_p.password;
					cout<<"Repita su contraseña \n";
					cin>>auxpss;
					if(cliente_p.password == auxpss){
						sub11 = 0;
						} else {
						cout<<"Puso mal su contraseña repiita de vuelta la inicializacion de su contraseña \n ";
						getch();
						system("cls");
						}
					} if (cliente_p.edad > 120){
						system("cls");
						cout<<"Anteriormente ingreso una edad invalida ingrese una valida ahora \n";
						cin>>cliente_p.edad;
					} if (cliente_p.dni > 50000000){
						cout<<"El dni que ingreso anteriormente es invalido ingrese uno valido ahora \n";
						cin>>cliente_p.dni;
					}
					while(sub12 == 1){
						system("cls");
						cout<<" Esta es la interfaz de usuario de economix que desea hacer? \n";
						cout<<" 1. Ver mis datos \n";
						cout<<" 2. Depositar o sacar dinero de mi cuenta bancaria \n";
						cout<<" 3. Crear una cuenta bancaria \n";
						cout<<" 4. Pasar dinero a otro usuario \n";
						cout<<" 5. Volver al menu principal \n";
						cout<<" 6. Salir del sistema \n";
						cin>>aux12;
						switch(aux12){
							case 1: 
							system("cls");
							cout<<"Estos son tus datos \n";
							cout<<"Nombre : "<<cliente_p.nombre<<"\n";
							cout<<"Apellido : "<<cliente_p.apellido<<"\n";
							cout<<"Edad : "<<cliente_p.edad<<"\n";
							cout<<"DNI : "<<cliente_p.dni<<"\n";
							cout<<"Contraseña : "<<cliente_p.password<<"\n";
							getch();
							system("cls");
							break;
							case 2:
							system("cls");
							if(CB == 0) {
								cout<<" No tienes una cuenta bamcaria si quieres puedes crear una en el menu de ususario ";
								getch();
								system("cls");
								break;
							} else if (CB == 1){
								while(sub121 == 1){
								cout<<"Que quiere hacer? \n";
								cout<<"1. Depositar dinero en mi ceunta bancaria \n";
								cout<<"2. Sacar dinero de mi cuenta bancaria \n";
								cout<<"3. Ver el estado de mi cuenta \n";
								cout<<"4. Volver al anterior menu \n";
								cin>>aux121;
								switch(aux121){
									case 1:
									cout<<"Cuanto dinero quiere ingresar?";
									cin>>ingreso;
									cuenta_p.saldo += ingreso;
									cout<<"Su dinero fue ingresado con exito";
									getch();
									system("cls");
									break;
									case 2:
									cout<<"Cuanto dinero quiere sacar?";
									cin>>regreso;
									if(regreso > cuenta_p.saldo){
										cout<<"No puedes hacer eso";
										getch();
										system("cls");
										break;
										} else if (regreso <= cuenta_p.saldo){
									cuenta_p.saldo -= regreso;
									cout<<"Su dinero fue sacado con exito";
									getch();
									system("cls");
									break;
										}
									case 3:
										cout<<"Su interes es de : "<<cuenta_p.interes<<"% \n";
										cout<<"Tienes "<<cuenta_p.saldo<<" Dolares en tu cuenta";
										getch();
										system("cls");
									break;
									case 4:
										sub121 = 0;
										break;
									}
								}
									break;
								}
								case 3:
								system("cls");
								if (CB == 1){
									cout<<"Ya tienes una cuenta bancaria, vuelve al menu principal";
									getch();
									system("cls");
								} else {
									cout<<"Antes de nada introduzca su contraseña";
								cin>>aux13;
								if (aux13 == cliente_p.password){
									if(cliente_p.edad >= 18){
										CB = 1;
										cout<<"Su cuenta ah sido creada correctamente y tu saldo empieza con 100 dolares y un interes de 10%";
										cuenta_p.saldo = 100;
										cuenta_p.interes = 10;
										getch();
										system("cls");
									} else if (cliente_p.edad <= 18){
										cout<<"Debe ser mayor de edad para poder crear una cuenta";
										getch();
										system("cls");
									}
								}
								}
								break;
								case 4:
									system("cls");
									fflush(stdin);
									if(CB == 1){
										cout<<"Ingresa el nombre del cliente al cual quieres transferir el dinero \n";
										cin.getline(aux41,10,'\n');
										if(strcmp(aux41,cliente1.nombre) == 0){
										aux4141 = 1;
										} else if (strcmp(aux41,cliente2.nombre) == 0){
										aux4141 = 2;
										} else if (strcmp(aux41,cliente3.nombre) == 0){
										aux4141 = 3;	
										} else {
										aux4141 = 0;
											}
										switch(aux4141){
											case 1:
												cout<<"Cuanto dinero quieres transferir?";
												cin>>ingreso;
												if(ingreso > cuenta_p.saldo){
													cout<<"No puedes hacer eso";
													getch();
													system("cls");
												} else {
													cuenta1.saldo += ingreso;
													cout<<"El dinero fue ingresado con exito";
													getch();
													system("cls");										
													}
												break;
											case 2:
												cout<<"Cuanto dinero quieres transferir?";
												cin>>ingreso;
												if(ingreso > cuenta_p.saldo){
													cout<<"No puedes hacer eso";
													getch();
													system("cls");
												} else {
													cuenta2.saldo += ingreso;
													cout<<"El dinero fue ingresado con exito";
													getch();
													system("cls");										
													}
												break;
											case 3:
												cout<<"Cuanto dinero quieres transferir?";
												cin>>ingreso;
												if(ingreso > cuenta_p.saldo){
													cout<<"No puedes hacer eso";
													getch();
													system("cls");
												} else {
													cuenta3.saldo += ingreso;
													cout<<"El dinero fue ingresado con exito";	
													getch();
													system("cls");										
													}
												break;
											default:
												cout<<"No existe ningun cliente con ese nombre";
												getch();
												system("cls");
												break;
										}
										
										} else {
										cout<<"Nesesitas una cuenta bancaria para poder hacer transacciones";
										getch();
										system("cls");
									}
								 break;
								case 5:
									sub12 = 0;
									sub1 = 0;
									system("cls");
								 break;
								 break;
								case 6:
									sub1 = 0;
									sub12 = 0;
									Master = 0;
									system("cls");
								 break;
								 break;
								default: 
								
								break;
						}
						
					}
				
			} else if (strcmp(aux1,"no") == 0){
				cout<<"Entonces ingrese su contraseña de usuario";
				cin>>auxpss;
			
			
			} else {
				cout<<"Debe ingresar si o no para responder\n";
				getch();
				system("cls");
				}
			}
			break;
			case 2: 
			break;
			case 3: 
			break;
			case 4: 
			system("cls");
			while(sub4 == 1){
				cout<<"Seguro que desea salir?\n"; 
				cin.getline(aux4,10,'\n');
				strlwr(aux4);
			if(strcmp(aux4,"si") == 0){
				cout<<"Vuelva pronto\n";
				Master = 0;
				sub4 = 0;
				break;
			} else if(strcmp(aux4,"no") == 0){
				sub4 = 0;
				system("cls");
			} else{
				cout<<"Debe ingresar si o no para responder\n";
				getch();
				system("cls");
			}	
			} 
			break;
			default: 
			cout<<"Ingrese una opcion valida"; 
			getch();
			system("cls");
			break;
			
		}
	}
	
	
}
