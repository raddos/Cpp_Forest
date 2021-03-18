#include "Cvet.h"
#include <string>
#include <map>
#include <iostream>
using namespace std;




	Cvet::Cvet(string Im, string Fa, string PodFa){
	Ime = Im;
	Fam = Fa;
	PodFam = PodFa;
	}
		///
	string Cvet::getIme() {
		return Ime;
	}

	string Cvet::getFam() {
		return Fam;
	}
	
	string Cvet::getPodFam() {
		return PodFam;
	}
		////
	void Cvet::setIme(string Im) {
		Ime = Im;
	}
	void Cvet::setFam(string Po) {
		Fam = Po;
	}
	void Cvet::setPodFam(string PoF ){
		PodFam = PoF;
	}	


	 //
	
	 void Cvet::razmakCvet(Cvet a) {
		 string k = a.getIme();
		 string i = getIme();
		 map<string,string> PovezaneBiljke;
		 make_pair(k,i);
		 k = a.getFam();
		 i = getFam();
		 make_pair(k, i);
		 k = a.getPodFam();
		 i = getPodFam();
		 make_pair(k,i);
		 typedef map<string, string>::const_iterator MapIterator;
		 for (MapIterator clan = PovezaneBiljke.begin(); clan != PovezaneBiljke.end(); clan++)
		 {
			 cout << "Biljka " << clan->first << endl << "Porodinca:" << clan->second << endl;
		 }
	 };
	 
	 //A
	 char Cvet::getSimA() {
		 return simA;
	 };
	 
	 void Cvet::setSimA(char si) {
		 simA = si;
	 };
	 //B
	 
	 char Cvet::getSimB() {
		 return simB;
	 };
	 
	 void Cvet::setSimB(char si) {
		 simB = si;
	 };
	
	 //set latx
	 void Cvet::setLatX(int a) {
		 latx = a;
	 }
	 
	 //set laty
	 void Cvet::setLatY(int a) {
		 laty = a;
	 };
	 //get latx
	 
	 int Cvet::getLatX() {
		 return latx;
	 };
	 //get laty
	 
	 int Cvet::getLatY() {
		 return laty;
	 };
	 
	 
	 void Cvet::Display() {
		 char a1 = getSimA();
		 char a2 = getSimB();
		 int x = getLatX();
		 int y = getLatY();


		 //glava cveta;
		 for (int i = 0; i < x; i++) {
			 for (int j = 0; j < y; j++) {
				 if (i >= j) {
					 cout << a1;
				 }
				 else if (i <= j) {
					 cout << a2;
				 }
				 else
					cout << 0;

			 }
				cout << std::endl;
		 }
		 //stablo
		 for (int i = 0; i < y / 2 - 1; i++) {
				cout << " ";
		 }

			cout << " l ";
			cout << endl;
	 };

 