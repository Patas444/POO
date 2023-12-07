#include <iostream>
#include "Singleton.h"
#include "RegistroActividad.h"
#include "Factory.h"
#include "AbstractFactory.h"
#include "Builder.h"
#include "PizzaTime.h"
#include "Adapter.h"
#include "Adapter Circle.h"
#include "Prototype.h"
#include "DocumentPrototype.h"
#include "Decorator.h"
#include "Decorator_Cafe.h"
#include "Composite.h"
#include "ArchivoComposite.h"



//Este es para llamar el m_instance para "La Singleton"
//Singleton* Singleton::m_instance = nullptr;

//Este es para llamar el m_instance para "La Actividad de Singleton"
//RegistroActividad* RegistroActividad::m_instance = nullptr;

int main() {

//Singleton
/*
Singleton* SingleMan = Singleton::getInstance();
SingleMan->setValue(36);

Singleton* SingleMan2 = Singleton::getInstance();
cout << "Value: " << SingleMan2->getValue() << endl;
*/

//Actividad de Singleton
/*
RegistroActividad* Registro = RegistroActividad::getInstance();
//Listado de las actividades
Registro->SetActivity("Quieto");
Registro->SetActivity("Moviendose");
Registro->SetActivity("Peleando");
Registro->SetActivity("Morido . . .");
RegistroActividad* Registro2 = RegistroActividad::getInstance();
//Mostrar en pantalla las actividades
Registro2->GetActivity();
 */

//Factory
/*
FabricaVehiculos* fabricaCoches = new ConcreteFabricaCoches();
Vehiculo* coche = fabricaCoches->crearVehiculos();

FabricaVehiculos* fabricaBicicletas = new ConcreteFabricaBicicletas();
Vehiculo* bicicleta = fabricaBicicletas->crearVehiculos();

coche->Descripcion();
bicicleta->Descripcion();

delete fabricaCoches;
delete fabricaBicicletas;
*/

//Abstract Factory
/*
AbstractFactory* AFactory = new ConcreteAbsFactory();

Product_A* product_A = AFactory->CreateProduct_A();
Product_B* product_B = AFactory->CreateProduct_B();

product_A->Op_A();
product_B->Op_B();

delete AFactory;
delete product_A;
delete product_B;
*/

//Builder
/*
Builder* construct = new BuilderConcreto();

Director director(construct);
director.build();

BuildProduct* producto = construct->GetProduct();
producto->print();

delete construct;
delete producto;
*/

//Actividad de Builder 
/*
Cook* construct = new ClasicPizza();
Cook* construct1 = new ChessePizza();

Chef chef(construct);
chef.build();

Chef chef1(construct1);
chef1.build();

Pizza* pizza = construct->getProduct();
pizza->print();
Pizza* pizza1 = construct1->getProduct();
pizza1->print();

delete construct;
delete construct1;
delete pizza;
*/

//Adapter
/*
interfazVieja* ObjetoViejo = new interfazVieja();
interfazNueva* ObjetoNuevo = new adapter(ObjetoViejo);

ObjetoNuevo->NewMethod();

delete ObjetoNuevo;
delete ObjetoViejo;
*/

//Actividad de Adapter
/*
Circle* circle = new Circle();
Square* square = new Square();

Drawing* fitCircle = new FitCircle(circle);
Drawing* fitSquare = new FitSquare(square);

fitCircle->Draw();
fitSquare->Draw();

delete circle;
delete square;
delete fitCircle;
delete fitSquare;
*/

//Prototype
/*
Prototype* prototype = new PrototipoConcreto();
prototype->configurar("Ejemplo");

Prototype* copy = prototype->clone();
prototype->print();
copy->print();

delete prototype;
delete copy;
*/

//Actividad de Prototype
/*
DocumentoPrototype* prototipoTexto = new DocumentoTexto();
prototipoTexto->config("Texto");

DocumentoPrototype* prototipoImagen = new DocumentoImagen();
prototipoImagen->config("Imagen");

DocumentoPrototype* copiaTexto = prototipoTexto->clone();
DocumentoPrototype* copiaImagen = prototipoImagen->clone();

copiaTexto->config("Texto Nuevo");
copiaImagen->config("Imagen Nueva");

prototipoImagen->config("Imagen OG");
prototipoTexto->config("Texto OG");

prototipoTexto->clone()->show();
copiaTexto->show();

prototipoImagen->clone()->show();
copiaImagen->show();

delete prototipoTexto;
delete prototipoImagen;
delete copiaTexto;
delete copiaImagen;
*/

//Decorator
/*
ConcreteComponent* Objeto = new ConcreteComponent();
ConcreteDecoratorA* decoratorA = new ConcreteDecoratorA(Objeto);
ConcreteDecoratorB* decoratorB = new ConcreteDecoratorB(decoratorA);

Objeto->operacion();
decoratorA->operacion();
decoratorB->operacion();
*/

//Actividad de Decorator
/*
Cafe* cafe = new Cafe();
Milk* cafeConLeche = new Milk(cafe);
Sugar* cafeConAzucar = new Sugar(cafe);

cafe->MakeCafe();
cafeConLeche->decor();
cafeConAzucar->decor();

delete cafe;
delete cafeConLeche;
delete cafeConAzucar;
*/

//Composite
/*
leaf* hoja1 = new leaf();
leaf* hoja2 = new leaf();
Composite* composite = new Composite();

composite->addLeaf(hoja1);
composite->addLeaf(hoja2);

composite->operacion();

delete hoja1;
delete hoja2;
delete composite;
*/

//Actividad de Composite
/*
SistemArchive* archive1 = new SistemArchive();
SistemArchive* archive2 = new SistemArchive();
SistemFile* file = new SistemFile();

archive1->AddSistem(archive1);
file->AddSistem(archive2);

file->ShowInfo();

delete archive1;
delete archive2;
delete file;
*/
return 0;
}