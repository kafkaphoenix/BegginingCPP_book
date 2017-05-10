/*
 * Critter.h
 *
 *  Created on: 9 may. 2017
 *      Author: sorak
 */

#ifndef CRITTER_H_
#define CRITTER_H_

#include <string>
#include <iostream>


class Critter
{

	friend void peek(const Critter&);
	friend std::ostream& operator<<(std::ostream&, const Critter&);

private:
	int m_Hunger;
	int m_Boredom;
	static int s_Total;
	static void increaseTotal();
	static void decreaseTotal();
	std::string m_Name;

public:

	Critter();
	Critter(int=0,int=0,const std::string& = "");
	~Critter();

	int getHunger() const;
	void setHunger(int);
	int getBoredom() const;
	void setBoredom(int);
	void greet();
	static int getTotal();
	std::string getName() const;
};

#endif /* CRITTER_H_ */
