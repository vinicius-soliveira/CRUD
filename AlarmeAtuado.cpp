/*
 * AlarmeAtuado.cpp
 *
 *  Created on: Oct 1, 2020
 *      Author: Vinicius
 */

#include "AlarmeAtuado.h"

AlarmeAtuado::AlarmeAtuado() {
		this-> descricao  = " ";
		this-> classificacao  = " " ;
		this-> data  = " " ;
		this-> equipamento  = " " ;
		this-> dataEntrega = " ";
		this-> dataSaida =  " ";
		this-> descricaoEquipamento = " ";
		this-> vezesAtuado = 0;
		this->status = true;
}

AlarmeAtuado::AlarmeAtuado(string dataEntrega, string dataSaida, string descricaoEquipamento, int vezesAtuado, bool status)
{
	   this-> dataEntrega = dataEntrega;
	   this-> dataSaida =  dataSaida;
	   this-> descricaoEquipamento = descricaoEquipamento;
	   this-> vezesAtuado = 0;
	   this->status = true;
}

const string& AlarmeAtuado::getDataEntrega() const {
	return dataEntrega;
}

void AlarmeAtuado::setDataEntrega(const string &dataEntrega) {
	this->dataEntrega = dataEntrega;
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

AlarmeAtuado::~AlarmeAtuado() {
	// TODO Auto-generated destructor stub
}

