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
#include "Menu.h"

using namespace std;

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
	case 4:this->consultar();
		break;
	default:
		break;

	}

}

void Menu::criarEquipamento (){

	ofstream arquivo;
	Equipamento equipamento;

		string nomeTemp;
		string numeroSerieTemp;
		string tipoTemp;
		string dataTemp;

		cout<< "\nDigite o nome do equipamento: ";
		getline(cin, nomeTemp);
		cout<< "Digite o n�mero de s�rie: " << endl;
		getline(cin, numeroSerieTemp);
		cout<< "Digite o tipo do equipamento: " << endl;
		getline(cin, tipoTemp);
		cout<< "Digite a data de cadastro (DD/MM/AAAA): " << endl;
		getline(cin, dataTemp);

		equipamento = Equipamento(nomeTemp, numeroSerieTemp, tipoTemp, dataTemp);
		arquivo.open("Dados_equipamentos.txt", ios::app);
		arquivo <<"\n" << equipamento.getNome() << "\t \t" << equipamento.getNumeroSerie() << "\t \t" << equipamento.getTipo() << "\t \t"<< equipamento.getData()<< endl;
		arquivo.close();
}

void Menu::criarAlarme()
{
	 ofstream arquivo;
	 Alarme alarme;

	 string descricaoTemp;
	 string classificacaoTemp;
	 string equipamentoTemp;
	 string dataTemp;

	 cout<< "Digite  a descri��o do alarme: " << endl;
	 getline(cin,descricaoTemp);
	 cout<< "Digite a classifica��o (Alto, M�dio e Baixo): " << endl;
	 getline(cin, classificacaoTemp);
	 cout<< "Digite equipamento relacionado: " << endl;
	 getline(cin, equipamentoTemp);
	 cout<< "Digite a data de cadastro (DD/MM/AAAA): " << endl;
	 getline(cin, dataTemp);

	 alarme = Alarme(descricaoTemp, classificacaoTemp, equipamentoTemp, dataTemp);
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
			<< " 4 - Ordenar por Descri��o" << endl
			<< " 5 - Ordenar por Descri��o" << endl
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

void Menu::consultar()
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
		case 1:consultarEquipamentos();
			break;
		case 2: consultarAlarmes();
			break;
		default:
			break;

		}
}

void consultarAlarmes()
{

}
void consultarEquipamentos()
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


Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

