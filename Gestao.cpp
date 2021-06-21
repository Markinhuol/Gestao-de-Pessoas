#include "Gestao.hpp"

void Gestao::adicionaVendedor(Vendedor vendedor){
    vendedores.push_back(vendedor);
}

void Gestao::adicionaAdministrador(Administrador administrador){
    administradores.push_back(administrador);
}

void Gestao::adicionaFornecedor(Fornecedor fornecedor){
    fornecedores.push_back(fornecedor);
}

void Gestao::adicionaOperario(Operario operario){
    operarios.push_back(operario);
}

void Gestao::listaDeOperarios(){
    for (int i = 0; i < operarios.size(); i++){
        operarios[i].Imprimir();
        cout << endl;
    }
}

void Gestao::listaDeVendedores(){
    for (int i = 0; i < vendedores.size(); i++){
        vendedores[i].Imprimir();
        cout << endl;
    }
}

void Gestao::listaDeAdministradores(){
    for (int i = 0; i < administradores.size(); i++){
        administradores[i].Imprimir();
        cout << endl;
    }
}

void Gestao::listaDeFornecedores(){
    for (int i = 0; i < fornecedores.size(); i++){
        fornecedores[i].Imprimir();
        cout << endl;
    }
}