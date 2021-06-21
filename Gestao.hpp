#ifndef Gestao_hpp
#define Gestao_hpp

//using namespace std;

#include <iostream>
#include <string>
#include "Administrador.hpp"
#include "Empregado.hpp"
#include "Fornecedor.hpp"
#include "Operario.hpp"
#include "Pessoa.hpp"
#include "Vendedor.hpp"
#include <vector>

class Gestao {

public:
  Gestao(){};

  void adicionaVendedor(Vendedor vendedores);
  void adicionaAdministrador(Administrador administradores);
  void adicionaFornecedor(Fornecedor fornecedores);
  void adicionaOperario(Operario operarios);

  void listaDeOperarios();
  void listaDeVendedores();
  void listaDeFornecedores();
  void listaDeAdministradores();


protected:
  vector  <Vendedor>      vendedores;
  vector  <Fornecedor>    fornecedores;
  vector  <Operario>      operarios;
  vector  <Administrador> administradores;
};


#endif