/*
 * Critter.h
 *
 *  Created on: 9 may. 2017
 *      Author: sorak
 */

#ifndef CRITTER_H_
#define CRITTER_H_

class Critter
{

private:
	int m_Hunger=0;
	int m_Boredom=0;
	static int s_Total;
	static void increaseTotal();
	static void decreaseTotal();

public:

	Critter();
	Critter(int,int);
	~Critter();

	int getHunger() const;
	void setHunger(int);
	int getBoredom() const;
	void setBoredom(int);
	void greet();
	static int getTotal();

};

#endif /* CRITTER_H_ */
