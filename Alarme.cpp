/*
 * Alarme.cpp
 *
 *  Created on: Sep 28, 2020
 *      Author: Vinicius
 */

#include "Alarme.h"
#include <iostream>

using namespace std;

Alarme::Alarme() {
	this-> descricao  = " ";
	this-> classificacao  = " " ;
	this-> data  = " " ;
	this-> equipamento  = " " ;
	this->status = true;
}

Alarme::~Alarme() {
}

Alarme::Alarme(string descricao, string classificacao, string equipamento, string data){
	this-> descricao  = descricao;
	this-> classificacao  = classificacao;
	this-> data  = data;
	this-> equipamento  = equipamento;
	this->status = true;
}

const string& Alarme::getData() const{
		return data;
	}

	void Alarme::setData(const string &data) {
		this->data = data;
	}

	const string& Alarme::getDescricao() const{
		return descricao;
	}

	void Alarme::setDescricao(const string &descricao) {
		this->descricao = descricao;
	}

	const string& Alarme:: getClassificacao() const{
		return classificacao;
	}

	void Alarme::setClassificacao(const string &classificacao) {
		this->classificacao = classificacao;
	}

	const string& Alarme:: getEquipamento() const{
		return equipamento;
	}

	void Alarme::setEquipamento(const string &equipamento) {
		this->equipamento = equipamento;
}

bool Alarme::isStatus() const {
	return status;
}

void Alarme::setStatus(bool status) {
	this->status = status;
}


