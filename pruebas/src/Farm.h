/*
 * Farm.h
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#ifndef FARM_H_
#define FARM_H_
#include<vector>
#include "Critter.h"

class Farm {
private:
	int m_spaces;
	std::vector<Critter> m_Critters;
public:
	Farm(int=1);
	virtual ~Farm();
	void add(const Critter& aCritter);
	void rollCall() const;
};


#endif /* FARM_H_ */
