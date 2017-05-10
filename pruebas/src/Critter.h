/*
 * Critter.h
 *
 *  Created on: 9 may. 2017
 *      Author: sorak
 */

#ifndef CRITTER_H_
#define CRITTER_H_
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Critter
{

private:
	int m_Hunger=0;
	int m_Boredom=0;
	static int s_Total;
	static void increaseTotal();
	static void decreaseTotal();
	string m_Name="none";

public:

	Critter();
	Critter(int,int,const string&);
	~Critter();

	int getHunger() const;
	void setHunger(int);
	int getBoredom() const;
	void setBoredom(int);
	void greet();
	static int getTotal();
	string getName() const;
};

#endif /* CRITTER_H_ */
