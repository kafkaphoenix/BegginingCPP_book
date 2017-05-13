/*
 * CritterHeap.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#include "CritterHeap.h"
#include <iostream>

CritterHeap::CritterHeap(const std::string& name,int age):m_pName(new std::string(name)),m_Age(age) {


}

CritterHeap::~CritterHeap() {

	delete m_pName;
}

CritterHeap::CritterHeap(const CritterHeap& c):
		m_pName(new std::string(*(c.m_pName))), m_Age(c.m_Age)
{}

CritterHeap& CritterHeap::operator=(const CritterHeap& c){
	if(this != &c){
		delete m_pName;
		m_pName = new std::string(*(c.m_pName));
		m_Age=c.m_Age;
	}
	return *this;
}

void CritterHeap::greet() const{
	std::cout << "I'm " << *m_pName << " and I'm " << m_Age<<" years old.";
	std::cout << "&m_pName: "<<&m_pName<<std::endl;
}

