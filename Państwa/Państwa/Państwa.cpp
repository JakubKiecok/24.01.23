#include <iostream>
using namespace std;

struct Flaga
{
	string kolory;
	unsigned short int dd, mm, rr;
};

struct Panstwa
{
	string nazwa;
	int ludnosc, ilosc_wojewodztw;
	Flaga opis_flagi;
};

int main()
{
	setlocale(LC_CTYPE, "Polish");

	Panstwa* wsk;

	Panstwa p1{ "Panstwo1", 12458376, 7, {"Czerwony, Czarny", 5, 01, 1292} };
	Panstwa p2{ "Panstwo2", 12466, 2, {"Niebieski, Zolty, Czarny", 25, 9, 1992} };
	Panstwa p3{ "Panstwo3", 52376, 45, {"Czerwony, Bialy, Czarny", 12, 10, 2021} };
	Panstwa p4{ "Panstwo4", 5326734536, 98, {"Czerwony, Niebieski", 8, 2, 1742} };
	Panstwa p5{ "Panstwo5", 5762930, 15, {"Czerwony, Czarny, Fioletowy, Niebieski, Biały", 20, 12, 1112} };

	int wybiez;

	cout << "Ktore państwo chcesz zobaczyć od 1 do 5." << endl << "Państwo nr: ";
	cin >> wybiez;
	switch (wybiez)
	{
	case 1:
		wsk = &p1;
		cout << "Nazwa " << wsk->nazwa << ", Ludność " << wsk->ludnosc << ", Ilosc wojewodztw " << wsk->ilosc_wojewodztw << ", Kolory flagi " << wsk->opis_flagi.kolory << ", Dzien ustanowienia flagi " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
		break;
	case 2:
		wsk = &p2;
		cout << "Nazwa " << wsk->nazwa << ", Ludność " << wsk->ludnosc << ", Ilosc wojewodztw " << wsk->ilosc_wojewodztw << ", Kolory flagi " << wsk->opis_flagi.kolory << ", Dzien ustanowienia flagi " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
		break;
	case 3:
		wsk = &p3;
		cout << "Nazwa " << wsk->nazwa << ", Ludność " << wsk->ludnosc << ", Ilosc wojewodztw " << wsk->ilosc_wojewodztw << ", Kolory flagi " << wsk->opis_flagi.kolory << ", Dzien ustanowienia flagi " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
		break;
	case 4:
		wsk = &p4;
		cout << "Nazwa " << wsk->nazwa << ", Ludność " << wsk->ludnosc << ", Ilosc wojewodztw " << wsk->ilosc_wojewodztw << ", Kolory flagi " << wsk->opis_flagi.kolory << ", Dzien ustanowienia flagi " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
		break;
	case 5:
		wsk = &p5;
		cout << "Nazwa " << wsk->nazwa << ", Ludność " << wsk->ludnosc << ", Ilosc wojewodztw " << wsk->ilosc_wojewodztw << ", Kolory flagi " << wsk->opis_flagi.kolory << ", Dzien ustanowienia flagi " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
		break;
	default:
		cout << "Nie ma takiego panstwa w bazie" << endl;
		break;
	}
}