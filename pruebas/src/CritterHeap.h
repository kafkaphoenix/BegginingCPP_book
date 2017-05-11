/*
 * CritterHeap.h
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */

#ifndef CRITTERHEAP_H_
#define CRITTERHEAP_H_

#include<string>


class CritterHeap {
private:
	std::string* m_pName;
	int m_Age;
public:
	CritterHeap();
	CritterHeap(const std::string& = "", int = 0);
	virtual ~CritterHeap();
	void greet() const;
	CritterHeap& operator=(const CritterHeap&);
	CritterHeap(const CritterHeap&);
};

#endif /* CRITTERHEAP_H_ */
