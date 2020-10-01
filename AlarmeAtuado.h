/*
 * AlarmeAtuado.h
 *
 *  Created on: Oct 1, 2020
 *      Author: Vinicius
 */

#ifndef ALARMEATUADO_H_
#define ALARMEATUADO_H_

#include "Alarme.h"
#include <string>

class AlarmeAtuado: public Alarme {
private:
	string dataEntrega;
	string dataSaida;
	string descricaoEquipamento;
	int vezesAtuado;
public:
	AlarmeAtuado();
	virtual ~AlarmeAtuado();
	AlarmeAtuado(string dataEntrega, string dataSaida, string descricaoEquipamento, int vezesAtuado, bool status);
	const string& getDataEntrega() const;
	void setDataEntrega(const string &dataEntrega);
	const string& getDataSaida() const;
	void setDataSaida(const string &dataSaida);
	const string& getDescricaoEquipamento() const;
	void setDescricaoEquipamento(const string &descricaoEquipamento);
};

#endif /* ALARMEATUADO_H_ */
