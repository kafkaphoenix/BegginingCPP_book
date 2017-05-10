/*
 * Farm.h
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#ifndef FARM_H_
#define FARM_H_
#include<vector>
#include <iostream>
#include "Critter.h"

using namespace std;

class Farm {
private:
	int spaces=1;
	vector<Critter> m_Critters;
public:
	Farm(int);
	virtual ~Farm();
	void add(const Critter& aCritter);
	void rollCall() const;
};


#endif /* FARM_H_ */
