#include "Administrador.hpp"

Administrador::Administrador()
{
  
}

void Administrador::calculaSal()
{
float salarioadm;
  salarioadm = salBase + ajudaCusto;
  cout << "Salario Total Administrador: "<<salarioadm << endl;
}
void Administrador::Imprimir()
{
cout << "Nome Administrador: " << getNome() << endl;
cout << "Salario Base: " << getSalBase() <<endl;
cout << "Salario Ajuda de Custo: " << getAjudaCusto() <<endl;
calculaSal();

}
void Administrador::setAjudaCusto(float aj)
{
ajudaCusto=aj;
}
float Administrador::getAjudaCusto()
{
return ajudaCusto;
}
