#ifndef Pessoa_hpp
#define Pessoa_hpp

#include <iostream>
using namespace std;

class Pessoa
{
public:
    Pessoa();
    Pessoa(string nome, string endereco, string telefone);

    string getNome();
    string getEndereco();
    string getTelefone();

    void setNome(string nome);
    void setTelefone(string telefone);
    void setEndereco(string endereco);
    
    virtual void Imprimir();

//Membros protegidos sao acessiveis também pelas classes herdeiras
protected:
    string nome;
    string endereco;
    string telefone;
   
};
#endif /* Pessoa_hpp */