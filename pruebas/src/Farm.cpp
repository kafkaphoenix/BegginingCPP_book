/*
 * Farm.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#include "Farm.h"
#include <iostream>

Farm::Farm(int spaces)
:m_spaces(spaces)
{
	m_Critters.reserve(m_spaces);
}

Farm::~Farm() {

}

void Farm::add(const Critter& aCritter){
	m_Critters.push_back(aCritter);
}

void Farm::rollCall() const{
	for(std::vector<Critter>::const_iterator iter=m_Critters.begin();iter!=m_Critters.end();++iter){
		std::cout << iter->getName()<<std::endl;
	}
}

