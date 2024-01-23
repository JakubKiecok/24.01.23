#include <iostream>
using namespace std;

struct Data
{
	unsigned short int dd, mm, rr;
};

struct Osoba
{
	char imie[50];
	char nazwisko[50];
	int wiek;
	Data data_ur;
};

int main()
{
	Osoba osoba_nr1 = { "Arkadiusz", "Waliczek", 47, {11, 03, 1976} };
	Osoba osoba_nr2 = { "Mariolka", "Waliczek", 18, {12, 03, 2006} };

	cout << osoba_nr1.imie << " " << osoba_nr1.nazwisko << " " << osoba_nr1.wiek << " " << "Data ur: " <<
		osoba_nr1.data_ur.dd << " " << osoba_nr1.data_ur.mm << " " << osoba_nr1.data_ur.rr << endl;
	cout << osoba_nr2.imie << " " << osoba_nr2.nazwisko << " " << osoba_nr2.wiek << " " << "Data ur: " <<
		osoba_nr2.data_ur.dd << " " << osoba_nr2.data_ur.mm << " " << osoba_nr2.data_ur.rr << endl;

	return EXIT_SUCCESS;
}
