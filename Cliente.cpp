#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona { 
	//atributos
	private : string nit;
	
	//constructor
	public :
	Cliente(){
	}
	
	Cliente(string nom,string ape,string dir,int tel,string n); Persona(nom,ape,dir,tel){
		nit = n;
		
	}
	// metodos
	// set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombre = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	// get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombre;}
	string getApellidps(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefonot(){return telefono;}
	//metodos
	void mostrar(){
		cout<<"_________________"<<endl;
		cout<<nit<<","<<nombre<<","<<apellidos<<","<<direccion<<","<<direccion<<","<<telefono<<endl;
		
	}
	
};
