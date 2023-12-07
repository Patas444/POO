#pragma once
class Singleton
{
public:
Singleton() : m_value(0) {};

static
Singleton*
getInstance() {
if (m_instance != nullptr) {
return m_instance;
}
else {
m_instance = new Singleton;
}
return m_instance;
}

~Singleton() = default;

//Establecer el valor de m_value
void
setValue(int _v) {
m_value = _v;
}

//Obtiene el valor de m_value
int
getValue() {
return m_value;
}
private:
int m_value;
static Singleton* m_instance;
};