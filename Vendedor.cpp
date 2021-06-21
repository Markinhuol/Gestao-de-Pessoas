#include "Vendedor.hpp"

Vendedor::Vendedor()
{

}

void Vendedor::calculaSal()
{
  float salariovend;
  salariovend = salBase + comissao;
  cout << "Salario Total Vendedor: "<<salariovend<< endl;
}

void Vendedor::Imprimir()
{
  cout << "Nome Vendedor: " << getNome() << endl;
  cout << "Produção: " << getRendimentos() << endl;
  cout << "Salario Base: " << getSalBase() <<endl;
  cout << "Valor Comissao: "<< getComissao() <<endl;
  calculaSal();
}

void Vendedor::setRendimentos(float rd)
{
  rendimentos=rd;
}

int Vendedor::getRendimentos()
{
  return rendimentos;
}

void Vendedor::setComissao(float c)
{
  comissao=c;
}

float Vendedor:: getComissao()
{
  return comissao;
}

void Vendedor::setValorVendas(float vv)
{
  valorvendas = vv;
}

float Vendedor::getValorVendas()
{
  return valorvendas;
}