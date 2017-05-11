/*
 * Player.h
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
#include <string>

class Player {
public:
	Player(const std::string& = "");
	virtual ~Player();
	std::string getName() const;
	Player* getNext() const;
	void setNext(Player* next);
//	Player(const Player&);

private:
	std::string m_Name;
	Player* m_pNext;
};

#endif /* PLAYER_H_ */
