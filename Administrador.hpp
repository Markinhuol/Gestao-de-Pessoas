#include <iostream>
#include "Empregado.hpp"
#ifndef Administrador_hpp
#define Administrador_hpp


class Administrador : public Empregado
{
  public:

    Administrador();
    void calculaSal();
    void Imprimir();
    void setAjudaCusto(float aj);
    void detalhesAdministrador();

    float getAjudaCusto();
    


  protected:
  float ajudaCusto;
   

};
#endif