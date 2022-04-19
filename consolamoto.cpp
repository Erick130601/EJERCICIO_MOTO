#include"pch.h"
#include "listamotorizado.h"
#include <conio.h>

void menu()
{
	cout << "1. Agregar motorizado de manera aleatoria: " << endl;
	cout << "2. Agregar motorizado de manera manual: " << endl;
	cout << "3. Eliminar motorizados: " << endl;
	cout << "4. Lista de motociclistas de Rappi: " << endl;
	cout << "5. Lista de motociclistas de Globo: " << endl;
	cout << "6. Lista de motorizados totales: " << endl;
	cout << "7. Salir : " << endl;
	cout << "8. Insertar motorizado en alguna posicion : " << endl;
	cout << "9. Eliminar alguna posicion : " << endl;
	cout << "10. Editar empresa : " << endl;
}
int main() {
	srand(time(NULL));
	listamotorizado* arreglo = new listamotorizado();
	for (int i = 0; i < 10; i++)
	{
		arreglo->agregarmotorizado();
	}
	int opcion;
	string nombre;
	string apellido;
	int placa;
	int kilometraje;
	string empresa;
	int posicion;
	int posicion2;
    int posicion3;
	motorizado* valor;
	

	while (1) {
		
		menu();
		cout << "Ingrese un numero:"; cin >> opcion;
		
		switch (opcion)
		{
		case 1:
			arreglo->agregarmotorizado(); cout << "elementos agregados aleatoiamente"; break;
		case 2:
			cout << "Ingrese el primer nombre:"; cin >> nombre;
			cout << "Ingrese el apellido: "; cin >> apellido;
			cout << "Ingrese la placa: "; cin >> placa;
			cout << "Ingrese el kilometraje: "; cin >> kilometraje;
			cout << "Ingrese la empresa: "; cin >> empresa;

			valor = new motorizado(nombre, apellido, placa, kilometraje, empresa);

			arreglo->agregarmotorizado(valor);
			cout << "Informacion almacenada de manera manual" << endl; break;
		case 3:
			arreglo->eliminarmotorizado();
			cout << "Motorizado eliminado"<<endl;
			break;
		case 4:
			arreglo->getrappi();
			break;
		case 5:
			arreglo->getglobo();
			break;
		case 6:
			arreglo->mostrarinformacion();
			break;
		case 7:
			exit(0);
		case 8:
			cout << "Colocar en que posicion colocarlo: "; cin >> posicion;
			arreglo->insertarmotociclista(posicion);
			cout << "Motociclista agregado" << endl;
			break;
		
		case 9:
			cout << "Que poscion desea eliminar: "; cin >> posicion2;
			arreglo->eliminarenposicion(posicion2);
			cout << "Motociclista eliminado" << endl;
			break;
		case 10:
			string nuevaempresa;
			cout << "Que poscion desea editar: "; cin >> posicion3;
			cout << "Empresa a cambiar : "; cin >> nuevaempresa;
			arreglo->editarempresa(posicion3, nuevaempresa);
			cout << "Motorizado editado"<<endl;
	    }
		getch();
		system("cls");
	}

	_getch();
	return 0;
}







//int main(array<System::String ^> ^args)
//{
 //   return 0;
//}
