/*Harjoitus 7
Santeri Taponen
Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
painoon.
Versio: Mooses
PVM 24.9.2014*/
#include <iostream>
using namespace std;
int main()
{
	char nimi[30];
	int pituus;
	char osoite[30];
	int paino;
	cout << "Ihannepaino\
			\nOhjelma laskee ihannepainosi\
			\npituutesi perusteella";
	cout << "\nAnna nimesi";
	cin.get(nimi, 30);
	cout << "\nAnna pituutesi senttein�";
	cin >> pituus;
	cout << "\nAnna osoitteesi";
	cin.get();
	cin.get(osoite, 30);
	cout << "\nAnna painosi kiloina";
	cin >> paino;
	cout << "\nArvoisa " << nimi;
	cout << "\nOsoitteesi on " << osoite;
	cout << "\nNykyinen painosi " << paino;
	cout << "\nIhannepainosi " << pituus - 100;
	cout << "\nErotus " << paino - (pituus - 100);

}