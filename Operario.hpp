#include "Empregado.hpp"

#ifndef Operario_hpp
#define Operario_hpp

class Operario : public Empregado
{
  public:
    Operario();
    float getComissao();
    float getValorProducao();
    float getSalarioOp();

    void  setComissao(float c);
    void  setValorProducao(float p);
    void  calculaSal();
    void  Imprimir();
    void detalhesOperario();
    void setSalarioOp(float so);
    
  protected:
    float comissao;
    int   vproducao;
    float salarioOp;
   
};
#endif