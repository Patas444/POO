#pragma once
#include "Prerequisites.h"

// Depreciada
class interfazVieja {
public:
virtual void OldMethod() {
cout << "Metodo viejo llamado" << endl;
  }
};

// Objetivo
class interfazNueva {
public:
virtual void NewMethod() {
cout << "Metodo nuevo llamado" << endl;
  }
};

class adapter : public interfazNueva {
public:
adapter(interfazVieja* _vieja) : m_InterfazVieja(_vieja) {}

  void NewMethod() override {
  cout << "Adaptador llamado al metodo nuevo" << endl;
  m_InterfazVieja->OldMethod();
  }

interfazVieja* m_InterfazVieja;
};