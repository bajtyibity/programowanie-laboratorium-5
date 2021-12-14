#include <iostream>
#include<string>

using namespace std;

int main()
{
	string tekst1;
	string tekst2;
	//przechowywanie danych wejsciowych
	cout << "podaj 1 wyraz ";
	getline(cin, tekst1);

	//przechowywanie danych wejsciowych
	cout << "podaj 2 wyraz ";
	getline(cin, tekst2);

	string wyraz3 = tekst1 + tekst2;
	
	cout << "dodanie wyrazow jest rowne "<<wyraz3<<endl;
	
	cout << "rozmiar dodanych elementow jest rowny "<<wyraz3.size()<<endl;

	string tekst4 = wyraz3;
	cout << "wartosc skopiowanego wyrazu "<<tekst4<<endl;

	return 0;
}