/*
 * Alarme.h
 *
 *  Created on: Sep 28, 2020
 *      Author: Vinicius
 */

#ifndef ALARME_H_
#define ALARME_H_
#include <string>

using std::string;

class Alarme {
protected:
	string descricao;
	string classificacao;
	string equipamento;
	string data;
	bool status;
public:
	Alarme();
	~Alarme();
	Alarme(string descricao, string classificacao, string equipamento, string data);

	const string& getData() const;
	void setData(const string &data);
	const string& getDescricao() const;
	void setDescricao(const string &descricao);
	const string& getClassificacao() const;
	void setClassificacao(const string &classificacao);
	const string& getEquipamento() const;
	void setEquipamento(const string &equipamento);
	bool isStatus() const;
	void setStatus(bool status);

};

#endif /* ALARME_H_ */
