#include "Persona.cpp"
#include <iostream>

using namespace std;
class Estudiante : Persona{
	//atributos: 
	private : string carnet;
	//constructor
	public :
		Estudiante(){
		}
		Estudiante(string nom,string ape,string dir,string fec, int tel, string car) :Persona(nom,ape,dir,fec,tel){
			carnet = car;
		}
		//metodos
		void leer(){
			cout<<carnet<<endl;
			cout<<nombres<<endl;
			cout<<apellidos<<endl;
			cout<<direccion<<endl;
			cout<<telefono<<endl;
			cout<<fecha_nacimiento<<endl;
		}
	
};
