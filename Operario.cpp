#include "Operario.hpp"

Operario::Operario()
{
  
}

void Operario::calculaSal()
{
float salarioop;
  salarioop = salBase + comissao;
  cout << "Salario Total Operario: " << salarioop << endl;
}

void Operario::Imprimir()
{
  cout << "Nome Operario: " << getNome() << endl;
  cout << "Salario Base: " << getSalBase() <<endl;
  cout << "Valor Comissao: "<< getComissao() <<endl;
  calculaSal();
}

void Operario::setComissao(float c)
{
  comissao = c;
}

float Operario::getComissao()
{
  return comissao;
}

void Operario::setValorProducao(float p)
{
  vproducao = p;
}

float Operario::getValorProducao()
{
  return vproducao;
}

void Operario::setSalarioOp(float op)
{
  salarioOp = op;
}

float Operario::getSalarioOp()
{
  return salarioOp;
}