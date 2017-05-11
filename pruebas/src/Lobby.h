/*
 * Lobby.h
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#ifndef LOBBY_H_
#define LOBBY_H_
#include <iostream>
#include "Player.h"
#include <string>

class Lobby {

	friend std::ostream& operator<<(std::ostream&,const Lobby&);
public:
	Lobby();
	virtual ~Lobby();
	void addPlayer();
	void removePlayer(Player&);
	void clear();
	Player* searchPlayer(const std::string&);
	Lobby(const Lobby&);
	Lobby& operator=(const Lobby&);
private:
	Player* m_pHead;
};

#endif /* LOBBY_H_ */
