#pragma once
#include "Prerequisites.h"

//Este crea la base del cafe
class Cafe {
public:
void MakeCafe() {
cout << "Preparado su cafe. . ." << endl;
	}
};

//Aqui se añadiran los decorados del cafe/los ingredientes
class
Toppings {
public:
virtual void decor() = 0;
};

class Milk
: public Toppings {
public:
Milk(Cafe* _coffee)
: cafeteria(_coffee) {}

	void decor() override {
	cafeteria->MakeCafe();
	cout << "Se agrego la Leche con exito" << endl;
	}

private:
Cafe* cafeteria;
};

class Sugar
: public Toppings {
public:
Sugar(Cafe* _coffee)
: cafeteria(_coffee) {}

	void decor() override {
	cafeteria->MakeCafe();
	cout << "Se agrego el Azucar con exito" << endl;
	}

private:
Cafe* cafeteria;
};
