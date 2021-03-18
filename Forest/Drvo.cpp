#include "Drvo.h"
#include "Hrast.h"
using namespace std;
static int konstbr;

Drvo::Drvo() { 
	konstbr++;
}
Drvo::Drvo(int vis, int sir) {
	visinaDrv = vis;
	sirinaKrosnj = sir;
};
int Drvo::getVisina() {
	return visinaDrv;
}
void Drvo::setVisina(int v) {
	visinaDrv = v;
}

int Drvo::getSirina() {
	return sirinaKrosnj;
}
void  Drvo::setSirina(int sir) {
	sirinaKrosnj = sir;
}

void Drvo::display() {
	
	//Krosnja
	int brojac_pocMesta = sirinaKrosnj;
	int vrh = sirinaKrosnj;
	int brojac_sreMesta = 0;
	int br = 0;

	for (int i = 0; i < sirinaKrosnj; i++) {
		
		for (int j = 0; j < brojac_pocMesta; j++)
			cout << " ";
		cout << "/";
		if (brojac_sreMesta != 0) {
			for (int k = 0; k < brojac_sreMesta * 2; k++) {
				cout << " ";
			}
		}
		cout << "\\";
		brojac_sreMesta++;
		brojac_pocMesta--;
		cout << endl;
		br++;
	}


	
	//Stablo
	brojac_pocMesta = br;
	for (int i = 0; i < visinaDrv; i++) {
		for (int j = 0; j < brojac_pocMesta; j++)
			cout << " ";
		cout << "||" << endl;
		
	}


}