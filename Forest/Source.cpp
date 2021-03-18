
#include <iostream>
#include <windows.h>// Sleep() opcija
#include <algorithm> // sort
#include <functional> // misleci ubacivanje func greater<int> ali nije bilo potrebno posto sam ja odradio funk
#include <fstream> // za datoteke
#include "Hrast.h"
#include <string>
#include "Drvo.h"
#include <deque>//iskoriceno za drugu klasu
#include <vector>//umesto nizova
#include <stack>// samo ubacivanje inicializovanih elemenata bez definicije
#include "Cvet.h"
#include <map> // map ovde nije bio potreban odradjen u klasi Cvet sa make_pair
using namespace std;

static int broj = 0;
void DisplayBackGround();
void Suma(Drvo dr, vector<Drvo> suma, Hrast * h, deque<Hrast>& Hrastovina, Cvet Cv, vector<Cvet> Cve, ofstream* file);
void KrajStimulatora();
template <typename T>
T UzmiBroj(T br){
//	stack(br);
	return br;
}

//template <ERROR_EMPTY > // nzm zato se u ovu temu umaju templati koji su bukl namenjeni pre linkera da rade 


int main() {
	
	DisplayBackGround();
	Drvo Dr; //potrebno zbog push_backa(dodavanje objekta)
	vector<Drvo>  Drvece;//Korisceno samo zbog broja objekata da ne bude konst;
	Hrast * hr = new Hrast();
	deque<Hrast> Hrastovina;
	ofstream datoteka;
	Cvet Cv;
	vector<Cvet> Cvece;
	

	Suma(Dr, Drvece, hr, Hrastovina,Cv,Cvece,&datoteka);
	
	KrajStimulatora();

	system("pause");
	return 0;
}

void DisplayBackGround() {

	system("color 2E");
	
	cout << "Dobrodosli u simulator c++ , pravljenje 'Forest' kako bi rekli drugacije sume." << endl;
	cout << "U ovom malom podrucju se uglavnom birati osnovni objekti suma : drvece,suma i cveca." << endl;
	cout << "Sa ovim kratkim uvodom ,slobodni ste sa pravljenjem!" << endl;
	
	Sleep(1000);

}



void Suma(Drvo dr,vector<Drvo> suma, Hrast *h, deque<Hrast>& Hrastovina,Cvet Cv,vector<Cvet> Cve,ofstream *file) {
	int brj = 0;
	cout << "Koliko obicnog cetinarskog drveca(jelka): ";
	int broj;
	cin >> broj;
	brj += broj;
	//Drvo: deklerisanje
	for (int i = 0; i < broj; i++) {
		suma.push_back(dr);
	}
	int prom;
	//preko vektora
	for (int i = 0; i < suma.size(); i++) {
		cout << "Sirina Drveta: ";
		cin >> prom;
		suma[i].setSirina(prom);
		cout << "Visina Drveta: ";
		cin >> prom;
		suma[i].setVisina(prom);
	}

	

	//Sortiranje zeljno ili ne 

	cout << "Zeliteli soritti po visini(da/ne): " << endl;
	string Odg;
	cin >>Odg;
	if (Odg == "Da" || Odg == "da") {
		sort(suma.begin(), suma.end(), [](Drvo a,Drvo b) {
		
			return a.getVisina() > b.getVisina();
		});
		// Provera
		for (Drvo dre : suma) {
			cout << " Visine po redu : " << dre.getVisina() << endl;
			
		}
	}

	cout << " Koliko obicnog listopadnog drveca(hrast): ";
	cin >> broj;
	brj += broj;
	UzmiBroj(broj);
	Hrast hrov;
	
	for (int i = 0; i < broj; i++) {
		Hrastovina.push_front(hrov); // deque se malo razlikuje od vektora po tome sto clanovi mogu da izlaze i ulaze na koju hoce stranu (imaju push_front za razliku od vec);
		}
	int a;
	for (int i = 0; i < broj;i++) {
		cout << "Godine hrasta: " << endl;
		cin >> a;
		Hrastovina[i].setGodina(a);
		cout << "Visina hrasta: " << endl;
		cin >> a;
		Hrastovina[i].setVisina(a);
		cout << "Sirina hrasta: " << endl;
		cin >> a;
		Hrastovina[i].setSirina(a);;
		
	}
	
	cout << endl;
	int k = 0;
	/*for (Hrast  he : Hrastovina) {
		cout << "Godine hrasta: " << endl;
		cout << h[k].getGodina() << endl;
		cout << "Visina hrasta: " << endl;
		cout << h[k].getVisina() << endl;
		cout << "Sirina hrasta: " << endl;
		cout << h[k].getSirina() << endl;
		k++;
	}*/
	
	cout << endl;


	cout << " Koliko flore: " << endl;
	cin >> broj;
	brj += broj;
	for (int i = 0; i < broj; i++) {
		Cve.push_back(Cv); 
	}
	string cvec;
	for (int i = 0; i < broj; i++) {
		cout << "Ime cveta: " << endl;
		cin >> cvec;
		Cve[i].setIme(cvec);
		cout << "Familija Cveta: " << endl;
		cin >> cvec;
		Cve[i].setFam(cvec);
		cout << "Pod familija Cveta " << endl;
		cin >> cvec;
		Cve[i].setPodFam(cvec);;
		char k;
		cout << "Ubacite 2 simbola cveta koji ce ga opisati pri kraju: " << endl;
		cout << "1. : " << endl;
		cin >> k;
		Cve[i].setSimA(k);
		cout << endl;
		cout << "2. : " << endl;
		cin >> k;
		Cve[i].setSimB(k);
		cout << " Poslednje stavke cveta : " << endl;
		cout << "Visina : " << endl;
		int l;
		cin >> l;
		Cve[i].setLatX(l);
		cout << " Druzina : " << endl;
		cin >> l;
		Cve[i].setLatY(l);

	}

	cout << "Zelite li spajati familije(da/ne)" << endl;
	string odg;
	cin >> odg;
	if (odg == "da") {
		cout << "Spajanje familija cvetova:" << endl;
		int l;
		cout << "Koji po redu cvet:(pocetak sa 0) " << endl;
		cin >> l;
		int o;
		cout << "I drugi po redu cvet " << endl;
		cin >> o;
		Cve[l].razmakCvet(Cve[o]);
	}

	cout << endl;

	cout << "Vas pejzaz!" << endl;
	for (int i = 0; i < suma.size(); i++) {
		suma[i].display();
		
	}
	for (int i = 0; i < Hrastovina.size(); i++) {
		Hrastovina[i].display();
	}
	for (int i = 0; i < Cve.size(); i++) {
		Cve[i].Display();
	}
	
	// Datoteka;
	file->open("Suma.txt", ios::out);
	if (file->is_open()) {
		string a = { "Vas broj kreiranih objekata : " };
		*file << a;
		*file << brj;

	}
	else
		cout << "Ne moze se otvoriti fajl";
	file->close();


}

void KrajStimulatora() {
	cout << "Hvala na probi!" << endl;
	Sleep(2000);

}



