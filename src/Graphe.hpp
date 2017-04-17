/*
 * Graphe.hpp
 *
 *  Created on: 1 avr. 2017
 *      Author: Cl�mentine
 */

#ifndef GRAPHE_H_
#define GRAPHE_H_

#include "Ville.h"
#include "Arete.h"

#include <vector>
#include <iostream>
#include <string>
using namespace std;



class Graphe {
	int nbVilles;
	vector<Ville> lesVilles;
	Arete graphe[nbVilles][nbVilles];

public:
	Graphe();
	void setNbVilles(int);
	void saisirNbVilles();
	void saisirVilles();
	void creerGraphe();
	virtual ~Graphe();
};

#endif /* GRAPHE_H_ */