#include <iostream>
#include <conio.h>
using namespace std;
//Prototipo Funci�n     
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
// Definici�n de la funci�n
void pedirDatos(){
	cout<<"Digite la Base: ";
	cin>>base;
	cout<<"Digite el Exponente: ";
	cin>>expo;	
}

void potencia(int a,int b){
	double result=1;  // Variable Local de la funci�n
	for(int i=1;i<b;i++)
	{
		result *=a;
	}
	cout<<"El resultado es: "<<result;
	}
