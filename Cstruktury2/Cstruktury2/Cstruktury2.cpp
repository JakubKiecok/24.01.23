#include <iostream>
using namespace std;

struct Hobby
{
	string nazwa, rodzaj, kierunek;
};

struct Osoba
{
	char imie[50], nazwisko[50];
	int wiek;
	Hobby moje_hobby;
};

int main()
{
	Osoba* wsk;

	Osoba o1 = { "Arkadiusz", "Waliczek", 47, {"Programowanie", "JS", "Frontend" } };
	Osoba o2 = { "Mariusz", "Waliczek", 40, {"Betonowanie", "na sucho", "wykonczeniowka" } };
	Osoba o3 = { "Zofia", "Waliczek", 30, {"Fryzjerstwo", "trendy", "dredy" } };
	
	wsk = &o1;
	cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->moje_hobby.nazwa << " " << wsk->moje_hobby.rodzaj << " " << wsk->moje_hobby.kierunek << endl;

	wsk = &o2;
	cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->moje_hobby.nazwa << " " << wsk->moje_hobby.rodzaj << " " << wsk->moje_hobby.kierunek << endl;

	wsk = &o3;
	cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->moje_hobby.nazwa << " " << wsk->moje_hobby.rodzaj << " " << wsk->moje_hobby.kierunek << endl;

	return EXIT_SUCCESS;
}
