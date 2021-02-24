#include<iostream>
using namespace std;

// prototipo funcion
void numero_par(int x);
int numero_mayor(int x, int y);
//main
int main()
	{
		int a,b,c;
		cout<<"Digite numero1: "<<endl;
		cin>>a;
		cout<<"Digite numero2: "<<endl;
		cin>>b;
		//numero_par(a);
		//numero_par(b);
		//cout<<"El numero1 es: "<<numero_par(a)<<endl;
		//cout<<"el numero2 es: "<<numero_par(b)<<endl;
		//c=numero_mayor(a,b);
		//cout<<"el numero mayor "<<c;
		cout<<"El numero mayor es: "<<numero_mayor(a,b)<<endl;
	
//cout<<"el numero mayor "<<c;
		cout<<"El numero mayor es: "<<numero_mayor(a,b)<<endl;
		numero_par(numero_mayor(a,b));
	return 0;
	}
oid numero_par(int x)
	{
		if(x % 2 == 0)
		{
			cout<<"El numero es par"<<endl;
		}
		else
		{
			cout<< "El numero es impar"<<endl;
		}
	}
oid numero_par(int x)
	{
		if(x % 2 == 0)
		{
			cout<<"El numero es par"<<endl;
		}
		else
		{
			cout<< "El numero es impar"<<endl;
		}
	}
int numero_mayor(int x, int y)
	{
		int mayor;
		if(x>y)
		{
			mayor=x;
		}
		else
		{
			mayor=y;
		}
	return mayor;		
	}	
	
