#pragma once
#include "Prerequisites.h"

//Aqui crearemos un Circulo
class Circle {
public:
    virtual void DrawCircle() {
    cout << "Se ha dibujado Circulo . . . y ya jajaja" << endl;
    }
};

//Aqui crearemos un Cuadrado
class Square {
public:
    virtual void DrawSquare() {
    cout << "Se ha dibujado Cuadrado . . . es extrañamente familiar" << endl;
    }
};

//Aqui ya comenzaremos a dibujar las figuras
class Drawing {
public:
virtual void Draw() = 0;
};

class FitCircle : public Drawing {
public:
    FitCircle(Circle* _circle) : m_Circle(_circle) {}

    void Draw() override {
    cout << "Comenzando a dibujar un circulo" << endl;
    m_Circle->DrawCircle();
    }

private:
 Circle* m_Circle;
};


class FitSquare : public Drawing {
public:
    FitSquare(Square* _square) : m_Square(_square) {}

    void Draw() override {
    cout << "Comenzando a dibujar un cuadrado" << endl;
    m_Square->DrawSquare();
    }

private:
Square* m_Square;
};