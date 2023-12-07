#pragma once
#include "Prerequisites.h"

//Crea la base del producto A
class Product_A {
public:
    virtual
    void
    Op_A() = 0;
};


//Crea la base del producto B
class Product_B {
public:
    virtual
    void
    Op_B() = 0;
};

class AbstractFactory {
public:
    virtual Product_A* CreateProduct_A() = 0;
    virtual Product_B* CreateProduct_B() = 0;
};

//Operacion para el producto A
class Product_A1 : public Product_A {
public:
    void
    Op_A() override {
    cout << "Realizando operacion en el Producto A1" << endl;
    }
};

//Operacion para el producto B
class Product_B1 : public Product_B {
public:
    void
    Op_B() override {
    cout << "Realizando operacion en el Producto B1" << endl;
    }
};

//Aqui concretamos la implementación de abstract factory
class ConcreteAbsFactory : public AbstractFactory {
public:
    Product_A* CreateProduct_A() override {
    return new Product_A1();
    }
    Product_B* CreateProduct_B() override {
    return new Product_B1();
    }
};