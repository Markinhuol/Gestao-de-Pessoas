#include "Pessoa.hpp"
#ifndef Fornecedor_hpp
#define Fornecedor_hpp



class Fornecedor: public Pessoa
{
  public:
    Fornecedor();
    void obterSaldo();
    void Imprimir();  //diferença entre credito e divida
  
    void setValorCredito(float vCredito);
    void setValorDivida(float vDivida);
    

    float getValorCredito();
    float getValorDivida();

    protected:
    float valorCredito; 
    float valorDivida; 
};


#endif /* Fornecedor_hpp */