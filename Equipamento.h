/*
 * Equipamento.h
 *
 *  Created on: Sep 28, 2020
 *      Author: Vinicius
 */

#ifndef EQUIPAMENTO_H_
#define EQUIPAMENTO_H_

#include <string>
#include <iostream>

using namespace std;

class Equipamento {
	private:
	string nome;
	string numeroSerie;
	string tipo;
	string data;
public:
	Equipamento();
	~Equipamento();
	Equipamento(string nome, string numeroSerie, string tipo, string data);

	const string& getData() const;
	void setData(const string &data);
	const string& getNome() const;
	void setNome(const string &nome);
	const string& getNumeroSerie() const;
	void setNumeroSerie(const string &numeroSerie);
	const string& getTipo() const;
	void setTipo(const string &tipo);

};

#endif /* EQUIPAMENTO_H_ */
