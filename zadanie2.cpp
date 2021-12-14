#include <iostream>

using namespace std;

int main()
{
	//nie ma odwołania dla konkretnej wartosci tablicy dla inta przy pobieraniu do elementów tablicy

	int liczby[100];
	char znaki[100];
	
	//cin >> liczby;
	//poprawne
	cin >> liczby[0];
	cin >> znaki;

	return 0;
}