#include "Pessoa.hpp"

Pessoa::Pessoa()
{
    
}

Pessoa::Pessoa(string nome, string telefone, string endereco)
{
  this->nome = nome;
  this->telefone = telefone;
  this->endereco = endereco;
}

void Pessoa::setNome(string nome)
{
  this->nome = nome;
}

void Pessoa::setTelefone(string telefone)
{
  this->Pessoa::telefone = telefone;
}

void Pessoa::setEndereco(string endereco)
{
  this->endereco = endereco;
}

string Pessoa::getNome()
{
    return nome;
}
string Pessoa::getTelefone()
{
    return telefone;
}

string Pessoa::getEndereco()
{
    return endereco;
}

void Pessoa:: Imprimir()
 {
cout << "Nome: " << getNome() << endl;
cout << "Telefone: " << getTelefone() << endl;
cout << "Endereco: " << getEndereco() << endl;

 }
