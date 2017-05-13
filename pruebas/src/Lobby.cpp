/*
 * Lobby.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#include "Lobby.h"

Lobby::Lobby()
: m_pHead(nullptr)
{}

Lobby::~Lobby() {
//	clear();
}

void Lobby::addPlayer(){
	std::string name;
	std::cout << "Enter nick: "<<std::endl;
	std::cin >> name;
	Player* p = new Player(name);

	if(m_pHead == nullptr){
		m_pHead = p;
	}else{
		Player* pIter = m_pHead;
		while(pIter->getNext()!=nullptr){
			pIter = pIter->getNext();
		}
		pIter->setNext(p);
	}
}

void Lobby::removePlayer(Player& p){
	if(&p==m_pHead){
		Player* pTemp = m_pHead;
		m_pHead= m_pHead->getNext();
		delete pTemp;
	}else{
		Player* pIter = m_pHead;
		Player* pBefore = nullptr;
		while(pIter!=nullptr && pIter->getName()!=p.getName()){
			pBefore = pIter;
			pIter = pIter->getNext();
		}

		pBefore->setNext(pIter->getNext());
		delete pIter;

	}
}

void Lobby::clear(){
	while(m_pHead!=nullptr){
		removePlayer(*m_pHead);
	}
}

std::ostream& operator<<(std::ostream& os,const Lobby& l){
	Player* pIter = l.m_pHead;
	os <<"Players's lobby:"<<std::endl<<std::endl;
	if(pIter==nullptr){
		os<<"The lobby is empty";
	}else{
		while(pIter!=nullptr){
			os <<"\t"<< pIter->getName()<<" dir: "<<pIter<<std::endl;
			pIter = pIter->getNext();
		}
		std::cout<<std::endl;
	}
	return os;
}

Player* Lobby::searchPlayer(const std::string& name){
	Player* p=m_pHead;

	while(p!=nullptr && p->getName()!=name){
		p=p->getNext();
	}
	return p;
}

Lobby::Lobby(const Lobby& c):m_pHead(nullptr){
	Player* iter=c.m_pHead;
	Player* end=nullptr;

	while(iter!=nullptr){
		Player* p = new Player(iter->getName());

		if(!m_pHead){
			m_pHead=p;
			end = m_pHead;
		}else{
			end->setNext(p);
			end = p;
		}
		iter=iter->getNext();
	}

}

Lobby& Lobby::operator=(const Lobby& c){
	if(this!=&c){
		this->clear();
		this->m_pHead = c.m_pHead;
	}
	return *this;
}

