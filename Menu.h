/*
 * Tela.h
 *
 *  Created on: Oct 1, 2020
 *      Author: Vinicius
 */

#ifndef MENU_H_
#define MENU_H_

#include "Alarme.h"
#include "AlarmeAtuado.h"
#include "Equipamento.h"

class Menu{
public:
	Menu();
	~Menu();
	void criarEquipamento();
	void criarAlarme();
	void manipularAlarmes();
	void listar();
	void listarAlarmes();
	void listarEquipamentos();
	void editarAlarmes();
	void editarEquipamentos();
	void excluirAlarmes();
	void excluirEquipamentos();
	void pesquisarEquipamentos();
	void pesquisarAlarmes();



};

#endif /* MENU_H_ */
