#include <iostream>
#include <stdlib.h>
#include "Pessoa.hpp"
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Gestao.hpp"


int main()
{
Gestao gestao;
string nome,telefone, endereco, cargo;
int op, cSetor;

  Fornecedor fornecedor_1;
  fornecedor_1.setNome("Arthur Souto Cassiano ");
  fornecedor_1.setTelefone("51984252436");
  fornecedor_1.setEndereco("Terra Nova,500");
  fornecedor_1.setValorCredito(2500);
  fornecedor_1.setValorDivida(1000);
  //fornecedor_1.Imprimir();
  
  Fornecedor fornecedor_2;

  fornecedor_2.setNome("Beatriz Souto Cassiano ");
  fornecedor_2.setTelefone("51984252436");
  fornecedor_2.setEndereco("Nova Terra, 500");
  fornecedor_2.setValorCredito(1500);
  fornecedor_2.setValorDivida(1000);
  //fornecedor_2.Imprimir();

  Empregado empregado_1;
  empregado_1.setNome("Marcus Vinicius Santana");
  empregado_1.setTelefone("51991731003");
  empregado_1.setEndereco("Alto Petropolis, 110");
  empregado_1.setImposto(10.0);
  empregado_1.setSalBase(2000.0);
  //empregado_1.Imprimir();

  Empregado empregado_2;
  empregado_2.setNome("Milena Ferreira");
  empregado_2.setTelefone("51993703145");
  empregado_2.setEndereco("Florescente, 330");
  empregado_2.setImposto(10.0);
  empregado_2.setSalBase(2000.0);
  //empregado_2.Imprimir();

  Administrador administrador_1;
  administrador_1.setNome("Katiele Souto");
  administrador_1.setTelefone("5198252436");
  administrador_1.setEndereco("Est. Rosa, 134");
  administrador_1.setSalBase(8500);
  administrador_1.setAjudaCusto(1500);
  //administrador_1.Imprimir();
  
  Administrador administrador_2;
  administrador_2.setNome("Jonathas Cassiano");
  administrador_2.setTelefone("5198251108");
  administrador_2.setEndereco("Rua Mourao, 973");
  administrador_2.setSalBase(6500);
  administrador_2.setAjudaCusto(1200);
  //administrador_2.Imprimir();



  Operario operario_1;

  operario_1.setNome("Carlos Augusto Santana");
  operario_1.setTelefone("5197864311");
  operario_1.setEndereco("Av. Protasio, 197");
  operario_1.setSalBase(1000);
  operario_1.setComissao(500);
  //operario_1.Imprimir();

  Operario operario_2;

  operario_2.setNome("Paulo Ricardo Santana");
  operario_2.setTelefone("5197869731");
  operario_2.setEndereco("Av. Tabajara, 193");
  operario_2.setSalBase(1000);
  operario_2.setComissao(700);
  //operario_2.Imprimir();

  Vendedor vendedor_1;

  vendedor_1.setNome("Paulo Gustavo");
  vendedor_1.setTelefone("5198532313");
  vendedor_1.setEndereco("Fermiano Cardoso 870");
  vendedor_1.setValorVendas(100);
  vendedor_1.setSalBase(1850);
  vendedor_1.setComissao(520);
  //vendedor_1.Imprimir();
  
  Vendedor vendedor_2;

  vendedor_2.setNome("Luiz Henrique");
  vendedor_2.setTelefone("5194161534");
  vendedor_2.setEndereco("Antonio Manuel Cardoso 87");
  vendedor_2.setValorVendas(67);
  vendedor_2.setSalBase(1850);
  vendedor_2.setComissao(360);
  //vendedor_2.Imprimir();

cout <<  "--Bem vindo ao SGP v0.1--";

do{
   cout << endl; cout << endl;
   cout << "SISTEMA GESTÃO DE PESSOAS" << endl;
   cout << "#########################" << endl;
   cout << "----------MENU-----------" << endl;
   cout << "#########################" << endl;
   cout << "1 - Adicionar pessoa" << endl;
   cout << "2 - Listar pessoas" << endl;
   cout << "3 - Listar fornecedores" << endl;
   cout << "4 - Listar empregados" << endl;
   cout << "5 - Listar administradores" << endl;
   cout << "6 - Listar operarios" << endl;
   cout << "7 - Listar vendedores" << endl;
   cout << "8 - Sair" << endl;
   cin >> op;


   switch(op)
   {
      case 1: 
      system("clear");
      cout << "SISTEMA GESTÃO DE PESSOAS" << endl;
      cout << "#########################" << endl;
      cout << "-----Cadastro Pessoa-----" << endl;
      cout << "Digite o nome: " << endl;
      cin >> nome;
      cout << "Digite o telefone: " << endl;
      cin >> telefone;
      cout << "Digite o endereço: " << endl;
      cin>>endereco;
      cout << "Digite o Cargo: " << endl;
      cin >> cargo;
    
      if(cargo == "Fornecedor")
      {
       int credito, divida;
       Fornecedor fornecedor; 
       cout << "Informe o valor do credito" << endl;
       cin >> credito; 
       cout << "Informe o valor da divida" << endl;
       cin >> divida;
       fornecedor.setValorCredito(credito);
       fornecedor.setValorDivida(divida);
       fornecedor.obterSaldo();
       fornecedor.setNome(nome);
       fornecedor.setTelefone(telefone);
       fornecedor.setEndereco(endereco);
       gestao.adicionaFornecedor(fornecedor);
      cout << " O fornecedor " << nome << " foi adicionado com sucesso!" << endl;

      }else if(cargo == "Administrador")
        {
         float ajudaCusto,salarioadm;

         Administrador administrador; 
         cout << "Informe Salario: " << endl;
         cin >> salarioadm;
         cout << "Informe Ajuda de Custo: " << endl;
         cin >> ajudaCusto;
         administrador.setNome(nome);
         administrador.setTelefone(telefone);
         administrador.setEndereco(endereco);
         administrador.setSalBase(salarioadm);
         administrador.setAjudaCusto(ajudaCusto);
         administrador.calculaSal();
         gestao.adicionaAdministrador(administrador);

         cout << "O administrador " << nome << " foi adicionado com sucesso!" << endl;

        }else if(cargo == "Operario")
          {
           float comissao,salarioop;
           
           cout << "Informe Salario: "<<endl;
           cin >> salarioop;
           cout << "Informe Comissao: " << endl;
           cin >> comissao;
           Operario operario; 
           operario.setNome(nome);
           operario.setTelefone(telefone);
           operario.setEndereco(endereco);
           operario.setComissao(comissao);
           operario.setSalBase(salarioop);
           operario.calculaSal();
           gestao.adicionaOperario(operario);
           cout << "O operario " << nome << " foi adicionado com sucesso!" << endl;
           
          }else if(cargo == "Vendedor")
           {
            int vendas;
            float comissao, salariovend, valorVendas;

            cout << "Informe a quantidade de Vendas: " << endl;
            cin >> vendas;
            cout << "Informe Salario: " << endl;
            cin >> salariovend;
            cout << "Informe Comissao: " << endl;
            cin >> comissao;
            Vendedor vendedor; 
            vendedor.setSalBase(salariovend);
            vendedor.setComissao(comissao);
            vendedor.setNome(nome);
            vendedor.setTelefone(telefone);
            vendedor.setEndereco(endereco);
            vendedor.calculaSal();
            gestao.adicionaVendedor(vendedor);
            cout << "O vendedor " << nome << " foi adicionado com sucesso!" << endl;
           }
            break; 

    case 2:
      cout << "Lista geral de todas pessoas:" << endl << endl;
      gestao.listaDeAdministradores();
      gestao.listaDeFornecedores();
      gestao.listaDeOperarios();
      gestao.listaDeVendedores();
    break;

    case 3:
      cout << "Lista geral de Fornecedores:" << endl << endl;
      gestao.listaDeFornecedores();
    break;
        
    case 4:
      cout << "Lista geral de Vendedores:" << endl << endl;
      gestao.listaDeAdministradores();
      gestao.listaDeOperarios();
      gestao.listaDeVendedores();
    break;
            
    case 5:
      cout << "Lista geral de todos Administradores:" << endl << endl;
      gestao.listaDeAdministradores();
    break;
            
    case 6:
      cout << "Lista geral de todos Operarios:" << endl << endl;
      gestao.listaDeOperarios();   
    break;
            
    case 7:
      cout << "Lista geral de todos Vendedores:" << endl <<  endl;
      gestao.listaDeVendedores();
    break;

    default:
      
     if(op != 8)
     {
      cout << "Essa opcao nao existe!" << endl;
     }
    break;
    }
    } while(op != 8);

    return 0;
  }