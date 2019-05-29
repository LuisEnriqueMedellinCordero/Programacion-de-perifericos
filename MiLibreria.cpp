/*********************************************************************************************
*                       Universidad Politecnica de Tulancingo                                *
*        	       Ingenieria en Electronica y Telecomunicaciones                            *
*                          ALUMNO: luis enrique medellin cordero                             *
*                             Programacion De Periféricos                                    *
*                              Arturo Negrete Medellin                                       *
**********************************************************************************************
*                    Este programa tiene como funcion mostrar librerias                      *
*********************************************************************************************/
#include "stdafx.h"
#include "MiLibreria.h"
#include <stdexcept>

using namespace std;

namespace MiLibreria {
	double Funciones::Suma(double a, double b) {
		return a + b;
	}
	double Funciones::Resta(double a, double b) {
		return a - b;
	}
	double Funciones::Multiplicacion(double a, double b) {
		return a * b;
	}
	double Funciones::Division(double a, double b) {
		return a / b;
	}
};