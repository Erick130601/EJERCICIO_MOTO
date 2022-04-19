#pragma once
#include "motorizado.h"

class listamotorizado {
private:
	int n;
	motorizado** arreglo; //Unique

public:
	listamotorizado() {
		n = 0;
		arreglo = new motorizado * [n];
	}

	~listamotorizado() {}

	//CRUD
	//Create - Read - Update - Delete
	//CREATE
	void agregarmotorizado() {
		motorizado* valor = new motorizado();
		motorizado** aux; //Duplicated
		aux = new motorizado * [n + 1];

		for (int i = 0; i < n; i++) {
			aux[i] = arreglo[i];
		}

		aux[n] = valor;
		n++;
		arreglo = aux;
	}
	void agregarmotorizado(motorizado* valor) {
		motorizado** aux; //Duplicated
		aux = new motorizado * [n + 1];

		for (int i = 0; i < n; i++) {
			aux[i] = arreglo[i];
		}

		aux[n] = valor;
		n++;
		arreglo = aux;
	}

	//DELETE
	void eliminarmotorizado() {
		motorizado** aux; //Duplicated
		aux = new motorizado * [n - 1];

		for (int i = 0; i < n - 1; i++) {
			aux[i] = arreglo[i];
		}

		n--;
		arreglo = aux;
	}

	//READ


	void mostrarinformacion() {
		cout << "nombre \t" << "apellido \t" << "placa\t" << "kilometraje \t" << "empresa\t"<<"precio\t" << endl;

		for (int i = 0; i < n; i++) {
			arreglo[i]->imprimir();
		}
	}
	void getrappi() {
		for (int i = 0; i < n; i++)
		{
			if (arreglo[i]->getempresa()=="Rappi")
			{
				arreglo[i]->imprimir();
			}
		}
	}
	void getglobo() {
		for (int i = 0; i < n; i++)
		{
			if (arreglo[i]->getempresa() == "Globo")
			{
				arreglo[i]->imprimir();
			}
		}
	}
	
	void insertarmotociclista(int posicion) {
		motorizado* valor = new motorizado();
		motorizado** aux;
		aux = new motorizado * [n + 1];
		for (int i = 0; i < posicion; i++)
		{
			aux[i] = arreglo[i];
		}
		aux[posicion] = valor;
		for (int i = posicion; i < n; i++)
		{
			aux[i + 1] = arreglo[i];
		}
		n++;
		arreglo = aux;
	}
	void eliminarenposicion(int posicion)
	{
		motorizado* valor = new motorizado();
		motorizado** aux;
		aux = new motorizado * [n - 1];
		for (int i = 0; i < posicion; i++)
		{
			aux[i] = arreglo[i];
		}
		for (int i = posicion; i < n; i++)
		{
			aux[i] = arreglo[i + 1];
		} 
		n--;
		arreglo = aux;
	}
	void editarempresa(int posicion, string nuevaempresa)
	{
		arreglo[posicion]->setempresa(nuevaempresa);
	}



};
