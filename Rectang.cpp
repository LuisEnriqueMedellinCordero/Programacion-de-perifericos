/*****************************************************
*       Universidad Politecnica de Tulancingo        *
*    Ingenieria en Electronica y Telecomunicaciones  *
*           Programación de Perifericos              *
*          luis enrique medellin cordero             *
******************************************************
*    En este programa se saca el volumen de un       *
*                paralelepipedo                      *
*****************************************************/

#include <iostream>
#include "pch.h"
using namespace std;

class Rectangulo {
	double alto;
	double ancho;
public:
	Rectangulo(void);
	Rectangulo(double, double);
	double Area();
};

class Para {
	double longitud;
	Rectangulo cara;
public:
	Para();
	Para(double, double, double);
	double Volumen();
};
Rectangulo::Rectangulo() {
	alto = 1;
	ancho = 1;
}

Rectangulo::Rectangulo(double h, double l) {
	alto = h;
	ancho = l;

}

double Rectangulo::Area() {
	return alto * ancho;
}

Para::Para() :cara() {
	longitud = 1;
}

Para::Para(double h, double w, double p) : cara(h, w) {
	longitud = p;
}

double Para::Volumen() {
	return longitud * cara.Area();
}

int main()
{
	Rectangulo base;
	Rectangulo cuadro(3, 4);
	Para cosa(3, 4, 5);
	
		cout << cosa.Volumen() << endl;
		cout << cuadro.Area() << endl;
		cout << base.Area() << endl;

		system("pause");
		return 0;

	
}