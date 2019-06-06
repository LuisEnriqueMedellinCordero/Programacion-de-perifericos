#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

int main()
	{
	string cadena, token;
		cout << "Captura una cadena: ";
		getline(cin, cadena);
		//cout << "la cadena mide: " << cadena.length << "bytes."<< endl;
		string delimita = " ";
		size_t pos = 0;
		while ((pos = cadena.find(delimita)) != string::npos) {
			token = cadena.substr(0, pos);
			std::string cadena[9];
			cout << cadena[9];
		}
		std::string cadena[9];
		cadena = cadena.substr(0, pos);
		cout << cadena[9];
	}
