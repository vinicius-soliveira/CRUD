/*
 * AlarmeAtuado.cpp
 *
 *  Created on: Oct 1, 2020
 *      Author: Vinicius
 */

#include "AlarmeAtuado.h"
#include <iostream>

using std::endl;
using std::cout;


AlarmeAtuado::AlarmeAtuado() {
		this-> descricao  = " ";
		this-> classificacao  = " " ;
		this-> data  = " " ;
		this-> equipamento  = " " ;
		this-> dataEntrada = " ";
		this-> dataSaida =  " ";
		this-> descricaoEquipamento = " ";
		this-> vezesAtuado = 0;
		this->status = true;
}

AlarmeAtuado::AlarmeAtuado(string dataEntrada, string dataSaida, string descricaoEquipamento, int vezesAtuado, bool status)
{
	   this-> dataEntrada = dataEntrada;
	   this-> dataSaida =  dataSaida;
	   this-> descricaoEquipamento = descricaoEquipamento;
	   this-> vezesAtuado = 0;
	   this->status = true;
}

const string& AlarmeAtuado::getDataEntrada() const {
	return dataEntrada;
}

void AlarmeAtuado::setDataEntrada(const string &dataEntrada) {
	this->dataEntrada = dataEntrada;
}

const string& AlarmeAtuado::getDataSaida() const {
	return dataSaida;
}

void AlarmeAtuado::setDataSaida(const string &dataSaida) {
	this->dataSaida = dataSaida;
}

const string& AlarmeAtuado::getDescricaoEquipamento() const {
	return descricaoEquipamento;
}

void AlarmeAtuado::setDescricaoEquipamento(const string &descricaoEquipamento) {
	this->descricaoEquipamento = descricaoEquipamento;
}

void AlarmeAtuado::detalharAlarmeAtuado()
{
	cout << "\nDescrição: " << this->descricao << endl
		 << "Classificação: " << this->classificacao << endl
		 << "Equipamento relacionado: " << this->equipamento<< endl
		 << "Data de Cadastro: " << this->data << endl
		 << "Data de Entrada: " << this->dataEntrada << endl
	     << "Data de Saída: " << this->dataSaida << endl
		 << "Descrição do equipamento: " << this->descricaoEquipamento << endl;


		if(status)
			cout<<"Status: Ativado"<<endl;
		else
			cout<< "Status: Desativado" << endl;
}

AlarmeAtuado::~AlarmeAtuado() {
	// TODO Auto-generated destructor stub
}

