#pragma once
#include "Drvo.h"
using namespace std;
class Hrast :public Drvo {
private:
	int godinahrasta;
public:
	Hrast();
	Hrast(int a, int b, int c);
	void display();
	int getGodina();
	void setGodina(int ka);
};