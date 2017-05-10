/*
 * critter.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#include "Critter.h"

using namespace std;

int Critter::s_Total=0;

int Critter::getTotal(){
	return s_Total;
}

void Critter::increaseTotal(){
	++s_Total;
}

void Critter::decreaseTotal(){
	--s_Total;
}

void Critter::greet()
{
	cout <<"Hola, tengo hambre: "<<m_Hunger<<endl;
}

void Critter::setHunger(int h){
	if(h<0){
		throw invalid_argument("Número negativo");
	}else{
		m_Hunger=h;
	}

}

int Critter::getHunger() const{
	return m_Hunger;
}

void Critter::setBoredom(int b){
	if(b<0){
		throw invalid_argument("Número negativo");
	}else{
		m_Boredom=b;
	}

}

int Critter::getBoredom() const{
	return m_Boredom;
}

Critter::Critter(){
	increaseTotal();
}

Critter::Critter(int x, int y, const string& name):m_Hunger(x),m_Boredom(y),m_Name(name){
	increaseTotal();
}

Critter::~Critter(){
	decreaseTotal();
}

string Critter::getName() const{
	return m_Name;
}


