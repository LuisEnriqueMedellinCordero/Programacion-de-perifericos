#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct alumno {
	string codigo;
	string nombre;
	int edad;
}talumno;



int main()
{
	/*int n = 5;
	vector <int> lista;
	lista.push_back(5);
	lista.push_back(7);
	lista.push_back(8);

	vector <int> lista1(n, 10);
	vector <int> lista2{ 10,20,30 };
	int arreaglo[] = { 50,100,150 };
	n = sizeof(arreaglo) / sizeof(arreaglo[0]);
	vector <int> lista3(arreaglo, arreaglo + n);

	for (int x : lista)
		cout << x << endl;
	for (int x : lista1)
		cout << x << endl;
	for (int x : lista2)
		cout << x << endl;
	for (int x : lista3)
		cout << x << endl;*/

	for (int n = 0; n < 5; n++) {
		talumno* apt;
		vector <talumno> listado;
		apt = new talumno;
		cout << endl << " Captura datos de alumno" << endl;
		cout << " Caputura el codigo: ";
		cin >> apt->codigo;
		cout << " Captura el nombre: ";
		cin >> apt->nombre;
		cout << " Captura edad: ";
		cin >> apt->edad;
		listado.push_back(*apt);


		cout << endl;
		for (talumno x : listado) {
			cout << " codigo: " << x.codigo << "    Nombre: " << x.nombre << "   Edad: " << x.edad << endl;

			//aqui inician otros metodos; busqueda, valor inicial, valor final, central, ordenamiento

			int busq_bin(int a[], int n, int nx){
			
				int central, bajo, alto, valorCentral;
				bajo = 1;
				alto = n - 1;
				while (bajo <= alto)
				{
					central = (bajo + alto) / 2;
					valorCentral = a[central];
					if (nx == valorCentral)
						return(central);
					else if (nx < valorCentral)
						alto = central - 1;
					else
						bajo = central + 1;
				}

				system("pause");
				return 0;
			}
		}
	}