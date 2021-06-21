#include <iostream>
#include "Pessoa.hpp"
#ifndef Empregado_hpp
#define Empregado_hpp

using namespace std;


class Empregado: public Pessoa
{
  public:
    Empregado(){};
    virtual void calculaSal();
    void Imprimir();


    void setSalBase(float sb);
    void setImposto(float ip);
    void setCodigoSetor(int cSetor);
    void setEscolhaSetor();

    int   getCodigoSetor();
    float getSalBase();
    float getImposto();


  protected:
    int codigoSetor;
    string setor;
    float salBase;
    float imposto;

};

#endif
