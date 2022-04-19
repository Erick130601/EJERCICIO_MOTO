#pragma once
#include <iostream>
#include <string>

using namespace std;


string pnombre[5] = { "Pedro", "lucho", "Marco", "Petrol", "Juan" };
string papellido[5] = { "Perez", "Palomino", "Suarez", "Perez", "Maima" };
string pempresa[2] = { "Rappi", "Globo" };


class motorizado {
private:
	string nombre;
	string apellido;
	int placa;
	int kilometraje;
	string empresa;
	int precio;

public:
	motorizado() {
		nombre =pnombre[rand()%5];
		apellido = papellido[rand()%5];
		placa = rand()% 2000 +1000;
		kilometraje = rand()%50;
		empresa = pempresa[rand()%2];
		
	}

	motorizado(string firstName, string lastName, int plate, int kilometer, string business) {
		this->nombre = firstName;
		this->apellido = lastName;
		this->placa = plate;
		this->kilometraje = kilometer;
		this->empresa = business;
	
	}

	~motorizado() {}

	double calcularprecio() {
		return double(kilometraje) * 1.5;
	}


	void imprimir() {
		cout << "\t" << nombre << "\t" << apellido << "\t" << placa << "\t" << kilometraje << "\t" << empresa << "\t"<<calcularprecio()<< "\t" << endl;
	}
	string getempresa() { return empresa; }
	void setempresa(string valor) { empresa = valor; }
};
