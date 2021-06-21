#include "Empregado.hpp"

void Empregado::calculaSal()
{
  float salario;
  salario = salBase - imposto;
  cout << "Salario com desconto de imposto é : "<<salario << endl;
}
void Empregado::Imprimir()
{
cout << "Empregado: " << getNome() << endl;
cout << "Salario: " << getSalBase() << endl;
calculaSal(); 
}

void Empregado::setSalBase(float sb)
{
  salBase = sb;
}

void Empregado::setImposto(float ip)
{
  imposto = ip;
}

void Empregado::setCodigoSetor(int cSetor)
{
  codigoSetor = cSetor;
}

int Empregado::getCodigoSetor()
{
  return codigoSetor;
}

float Empregado::getSalBase()
{
  return salBase;
}

float Empregado::getImposto()
{
  return imposto;
}

void Empregado::setEscolhaSetor()
{
  if(codigoSetor == 1)
  {
   setor = "1- Administrador";
  }
  else if(codigoSetor == 2)
  {
   setor = "2- Operario";
  }
  else if(codigoSetor == 3)
  {
   setor = "3- Vendedor";
  }
  else if(codigoSetor == 4)
  {
   setor = "4- Fornecedor";
  }
}