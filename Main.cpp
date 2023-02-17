#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit  ";
	cin>>nit;
	cout<<"Ingresar Nombre:  ";
	cin>>nombres;
	cout<<"Ingresar Apellidos:  ";
	cin>>apellidos;
	cout<<"Ingresar Direccion:  ";
	cin>>direccion;
	cout<<"Ingresar Telefono:  ";
	cin>>telefono;
	// instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);

	cout<<"Datos del Cliente:"<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl;
	
	
	
	
	
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDirecion(direcion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
	
	
}
