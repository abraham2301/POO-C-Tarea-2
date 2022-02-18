#include "Persona2.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona2{
	
	private : string nit;
			  string cui;
	
	public :
	Propietario (){
	}
		Propietario(string nom, string ape, string dir, string nac, int tel, strin n, string c) : Persona2(nom,ape,dir,nac,tel){
			nit=n;
			cui=c;
		}
	void mostrar(){
		cout<<"________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha de nacimiento","<<telefono<<","<<endl;
	}	
	
};
