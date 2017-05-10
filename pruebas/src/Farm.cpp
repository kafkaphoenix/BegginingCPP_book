/*
 * Farm.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#include "Farm.h"


Farm::Farm(int spaces){
	// TODO Auto-generated constructor stub
	m_Critters.reserve(spaces);
}

Farm::~Farm() {
	// TODO Auto-generated destructor stub
}

void Farm::add(const Critter& aCritter){
	m_Critters.push_back(aCritter);
}

void Farm::rollCall() const{
	for(vector<Critter>::const_iterator iter=m_Critters.begin();iter!=m_Critters.end();++iter){
		cout << iter->getName()<<endl;
	}
}

