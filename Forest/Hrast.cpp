#include "Drvo.h"
#include "Hrast.h"

Hrast::Hrast() {};

Hrast::Hrast(int a, int b, int c) {
	Drvo k;
	int n= k.getVisina();
	int l = k.getSirina();
	n = a;
	l = b;
	godinahrasta = c;

};

void Hrast::display() {
	int a = getVisina();
	int b = getSirina();
	int br = 0;
	// Krosnja
	for (int i = 1; i <= b; i++)
	{
		for (int j = 0; j < b; j++) {
			cout << " ";
		}
		// pravljenje reda
		if (i == 1 || i == b)
			for (int j = 1; j <= b; j++)
				cout << "*";

		// Kolona 
		else
			for (int j = 1; j <= b; j++)
				if (j == 1 || j == b)
					cout << "*";
				else
					cout << " ";
		br++;
		// Novi Red 
		cout << "\n";
	}
	//Stablo
	int brojac_pocMesta = br;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < brojac_pocMesta; j++)
			cout << " ";
		cout << "||" << endl;

	}

}

int Hrast::getGodina() {
	return godinahrasta;
};
void Hrast::setGodina(int ka) {
	godinahrasta = ka;

};
