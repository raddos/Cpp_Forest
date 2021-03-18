#pragma once
#include<iostream>

class Drvo {
private:
	int visinaDrv;
	int sirinaKrosnj;
public:
	Drvo();
	Drvo(int vis, int sir);
	int getVisina();
	virtual void setVisina(int v);
	int getSirina();
	virtual void setSirina(int sir);
	void display();
};