#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Cvet {
	private:
		string Ime;
		string Fam;
		string PodFam;
		char simA;
		char simB;
		int latx,laty;
	public:
		Cvet() {};
		Cvet(string Im, string Fa, string PodFa);
		void razmakCvet(Cvet a);
		//
		string getIme();
		string getFam();
		string getPodFam();
		
		//
		void setIme(string Im);
		void setFam(string Po);
		void setPodFam(string PoF);
		//
		
		
		char getSimA();
		void setSimA(char si);
		char getSimB();
		void setSimB(char si);
		//set latx
		void setLatX(int a);
		//set laty
		void setLatY(int a);
		//get latx
		int getLatX();
		//get laty
		int getLatY();
		void Display();
	};





