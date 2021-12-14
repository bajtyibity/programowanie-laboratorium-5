#include <iostream>
#include<string>

using namespace std;

int main()
{

	string ulica;
	cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
	getline(cin, ulica);

	string nrdomu;
	cout << "Podaj nr domu: ";
	getline(cin, nrdomu);

	string ocena;
	cout << "Na ile oceniasz swoje umiejetności programowania w skali [2 - 5]: ";
	getline(cin, ocena);
	int i = atoi(ocena.c_str());

	string staz;
	cout << "Twoj staz programistyczny: ";
	getline(cin, staz);

	cout << endl;
	cout << "Adres: " << ulica <<" "<< nrdomu <<endl;
	cout << "Ocena: "<< i-1 << endl;
	cout << "Staz: " << staz << " dni" << endl;

	return 0;
}