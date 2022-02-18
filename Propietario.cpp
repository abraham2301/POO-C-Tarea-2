#include "Persona2.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona{
	
	private : string nit;
			  string cui;
	
	public :
	Propietario (){
	}
		Propietario(string nom, string ape, string dir, string nac, int tel, string n,string c) : Persona(nom,ape,dir,nac,tel){
			nit=n;
			cui=c;
		}
	void mostrar(){
		cout<<"________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<nacimiento<<","<<telefono<<","<<nit<<","<<cui<<","<<endl;
	}	
	
};
