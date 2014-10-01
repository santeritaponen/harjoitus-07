/*Harjoitus 7
Santeri Taponen
Tee ohjelma, joka kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina.
Ohjelma laskee ja tulostaa käyttäjän ihannepainon (pituus-100). Lisäksi
ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne-
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
	cout << "\nAnna pituutesi sentteinä";
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