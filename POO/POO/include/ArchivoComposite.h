#pragma once
#include "Prerequisites.h"

//Aqui se creara las bases del Archivo
class
Archive {
public:
    virtual void ShowInfo() {
    cout << "Archivo Activo" << endl;
    }
};

//Aqui se definira la carpeta
class
File {
public:
    virtual void ShowInfo() {
    cout << "Carpeta Activa" << endl;
    }
};

class
Sistem {
public:
virtual void ShowInfo() = 0;
};

class
SistemArchive : public Archive, public Sistem {
public:
    void
    ShowInfo() override {
    cout << "Informacion localizada: "
    << m_docs.size() << " Archivos." << endl;
    for (auto hoja : m_docs) {
    hoja->ShowInfo();
    }
    }

    void
    AddSistem(Sistem* _doc) {
    m_docs.push_back(_doc);
    }
public:
vector<Sistem*>m_docs;
};

class
SistemFile : public File, public Sistem {
public:
    void
    ShowInfo() override {
    cout << "Informacion localizada: "
    << m_carp.size() << " Carpetas." << endl;
    for (auto hoja : m_carp) {
    hoja->ShowInfo();
    }
    }

    void
    AddSistem(Sistem* _doc) {
    m_carp.push_back(_doc);
    }
public:
vector<Sistem*>m_carp;
};