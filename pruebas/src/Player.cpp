/*
 * Player.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#include "Player.h"

Player::Player(const std::string& name)
:m_Name(name),m_pNext(nullptr)
{}

Player::~Player() {}

std::string Player::getName() const{
	return m_Name;
}

Player* Player::getNext() const{
	return m_pNext;
}

void Player::setNext(Player* next){
	m_pNext = next;
}

//Player::Player(const Player& p)
//:m_Name(new std::string(*(p))),m_pNext(nullptr)
//{}
