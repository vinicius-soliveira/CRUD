/*
 * Tela.cpp
 *
 *  Created on: Oct 1, 2020
 *      Author: Vinicius
 */

#include<iostream>
#include<fstream>
#include<vector>
#include"Equipamento.h"
#include "Alarme.h"
#include "AlarmeAtuado.h"
#include "Menu.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

std::vector<Equipamento> equipamentos;
std::vector<Alarme> alarmes;
std::vector<AlarmeAtuado> alarmesAtuados;

ofstream arquivoEquipamento;
ofstream arquivoAlarme;
ofstream arquivoAlarmeAtuado;

Menu::Menu() {


	int opcao = 0;

	cout << "***************************" << endl
	<<"Treetech Sistemas Digitais"<< endl
	<< "***************************\n" << endl
	<< " 1 - Cadastrar Equipamento" << endl
	<< " 2 - Cadastrar Alarme" << endl
	<< " 3 - Manipular Alarmes" << endl
	<< " 4 - Consultar" << endl
	<< "\nSelecione: ";
	cin>> opcao;

	cin.ignore();
	cin.clear();

	switch(opcao){
	case 1: this->criarEquipamento();
		break;
	case 2: this->criarAlarme();
		break;
	case 3: this->manipularAlarmes();
		break;
	case 4:this->listar();
		break;
	default:
		break;

	}

}

void Menu::criarEquipamento (){


	Equipamento equipamento;

		string nomeTemp;
		string numeroSerieTemp;
		string tipoTemp;
		string dataTemp;

		cout<< "\nDigite o nome do equipamento: ";
		getline(cin, nomeTemp);
		cout<< "Digite o número de série: " << endl;
		getline(cin, numeroSerieTemp);
		cout<< "Digite o tipo do equipamento: " << endl;
		getline(cin, tipoTemp);
		cout<< "Digite a data de cadastro (DD/MM/AAAA): " << endl;
		getline(cin, dataTemp);

		equipamento = Equipamento(nomeTemp, numeroSerieTemp, tipoTemp, dataTemp);
		equipamentos.push_back(equipamento);
		arquivoEquipamento.open("Dados_equipamentos.txt", ios::app);
		arquivoEquipamento <<"\n" << equipamento.getNome() << "\t \t" << equipamento.getNumeroSerie() << "\t \t" << equipamento.getTipo() << "\t \t"<< equipamento.getData()<< endl;
		arquivoEquipamento.close();
}

void Menu::criarAlarme()
{
	 ofstream arquivo;
	 Alarme alarme;

	 string descricaoTemp;
	 string classificacaoTemp;
	 string equipamentoTemp;
	 string dataTemp;

	 cout<< "Digite  a descrição do alarme: " << endl;
	 getline(cin,descricaoTemp);
	 cout<< "Digite a classificação (Alto, Médio e Baixo): " << endl;
	 getline(cin, classificacaoTemp);
	 cout<< "Digite equipamento relacionado: " << endl;
	 getline(cin, equipamentoTemp);
	 cout<< "Digite a data de cadastro (DD/MM/AAAA): " << endl;
	 getline(cin, dataTemp);

	 alarme = Alarme(descricaoTemp, classificacaoTemp, equipamentoTemp, dataTemp);
	 alarmes.push_back(alarme);
	 arquivo.open("Dados_alarmes.txt", ios::app);
	 arquivo << alarme.getDescricao() << "\t \t" << alarme.getClassificacao() << "\t \t" << alarme.getEquipamento() << "\t \t"<< alarme.getData()<< endl;
}

void Menu::manipularAlarmes()
{
	int op = 0;

			cout << "***************************" << endl
			<<"Treetech Sistemas Digitais"<< endl
			<< "***************************\n" << endl
			<< " 1 - Ativar Alarme" << endl
			<< " 2 - Desativar Alarme" << endl
			<< " 3 - Filtrar Alarmes" << endl
			<< " 4 - Ordenar por Descrição" << endl
			<< " 5 - Ordenar por Descrição" << endl
			<< " 6 - Ver Alarmes Mais Atuados" << endl
			<< "\nSelecione: ";
			cin>> op;

			cin.ignore();
			cin.clear();

			switch(op){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			default:
				break;


}
}

void Menu::listar() // Lista equipamentos e alarmes cadastrados no sistema
{

	int op = 0;

		cout << "***************************" << endl
		<<"Treetech Sistemas Digitais"<< endl
		<< "***************************\n" << endl
		<< " 1 - Consultar Equipamentos" << endl
		<< " 2 - Consultar Alarmes" << endl
		<< "\nSelecione: ";
		cin>> op;

		cin.ignore();
		cin.clear();

		switch(op){
		case 1:listarEquipamentos();
			break;
		case 2: listarAlarmes();
			break;
		default:
			break;

		}
}

void listarAlarmes()
{

}
void listarEquipamentos()
{

}
void editarAlarmes()
{

}
void editarEquipamentos()
{

}
void excluirAlarmes()
{

}
void excluirEquipamentos()
{

}

void pesquisarEquipamentos()
{

}
void pesquisarAlarmes()
{

}
void ativarAlarmes()
{

}
void desativarAlarmes()
{

}
void ordenarAlarmesClassificacao()
{

}
void ordenarAlarmesDescricao()
{

}
Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

