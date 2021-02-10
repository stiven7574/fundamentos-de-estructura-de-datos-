#include <iostream>
#include <conio.h>
using namespace std;
//Prototipo Función     
//nombre, tipo datos,numero de variables

void pedirDatos();
void potencia(int a,int b);

// variables Global
int base,expo;
int main()
{
// Llamado de las funciones
pedirDatos();
potencia(base,expo);
getch();
return 0;

}
// Definición de la función
void pedirDatos(){
	cout<<"Digite la Base: ";
	cin>>base;
	cout<<"Digite el Exponente: ";
	cin>>expo;	
}

void potencia(int a,int b){
	double result=1;  // Variable Local de la función
	for(int i=1;i<b;i++)
	{
		result *=a;
	}
	cout<<"El resultado es: "<<result;
	}
