#ifndef Vendedor_hpp
#define Vendedor_hpp
#include "Empregado.hpp"

class Vendedor: public Empregado
{
  public:
    Vendedor();

    void calculaSal();
    void Imprimir();

    void setComissao(float c);
    float getComissao();

    void setRendimentos(float rd);
    float detalhesVendedor();

    void setValorVendas(float vv);
    float getValorVendas();

    int getRendimentos();
    


  protected:
  float comissao, rendimentos, valorvendas;
   

};
#endif