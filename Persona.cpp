#include <iostream>
using namespace std;
class Persona{
	// atributos
	protected : string nombre,apellidos,direccion;
	           int telefono;
    // constructor
    protected: 
            persona(){
			}
			persona(string nom,string ape,string dir, int tel){
				nombre = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
			}
			
	//metodo
	void mostrar();
};
