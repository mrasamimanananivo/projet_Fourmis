/*
 * Ville.cpp
 *
 *  Created on: 1 avr. 2017
 *      Author: Clémentine
 */

#include "Ville.hpp"
#include<iostream>
#include<string>
using namespace std;


Ville::Ville(){
	// TODO Auto-generated constructor stub
	nomV="Ville";
}

Ville::Ville(std::string nomVille)
{
	nomV=nomVille;
}
void Ville::setNomVille(std::string nomVille)
{
	nomV=nomVille;
}

Ville Ville::creerVille(){
	std::string nomVille;
	cout<<"Saisir le nom de la ville :"<<endl;
	cin>>nomVille;
	Ville ville;
	ville = Ville(nomVille);
	return ville;

}

Ville::~Ville() {
	// TODO Auto-generated destructor stub
}


