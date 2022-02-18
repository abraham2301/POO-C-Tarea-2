#include <iostream>
using namespace std;
class Persona{
	
	protected : string nombres, apellidos, direccion, nacimiento;
				int telefono;
	
	protected : 
				Persona(){
					
				}
				Persona(string nom, string ape, string dir, string nac, int tel){
					nombres=nom;
					apellidos=ape;
					direccion=dir;
					nacimiento=nac;
					telefono=tel;
				}
	
	void mostrar();
	void agreagar();
};

