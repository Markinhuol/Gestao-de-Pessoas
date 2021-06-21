#include "Fornecedor.hpp"

Fornecedor::Fornecedor()
{
  
}

void Fornecedor::obterSaldo()
{
  float saldo;
  saldo =valorCredito - valorDivida;
  cout << "Saldo: "<< saldo << endl;
 
}
void Fornecedor::Imprimir()
{
cout << "Fornecedor: " << getNome() << endl;
cout << "Telefone: " << getTelefone() << endl;
cout << "Endereco: " << getEndereco() << endl;
cout << "Credito: " << getValorCredito() << endl;
cout << "Divida: " << getValorDivida() << endl;
obterSaldo();
}
void Fornecedor::setValorCredito(float vCredito)
{
  valorCredito = vCredito;
}
void Fornecedor::setValorDivida(float vDivida)
{
  valorDivida = vDivida;
}
float Fornecedor::getValorDivida()
{
  return valorDivida;
}
float Fornecedor::getValorCredito()
{
  return valorCredito;
}