/*
 * things.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */
#include "things.h"

template <typename T>
void recorrerIter(const std::vector<T>& v){
	typename std::vector<T>::const_iterator iter;
	for(iter=v.begin();iter!=v.end();++iter){
		std::cout << *iter<<std::endl;
	}
	std::cout << std::endl;
}

template <typename T>
int operator*(const std::vector<T>& v,const std::vector<T>& v2){
	typename std::vector<T>::const_iterator iter;
	typename std::vector<T>::const_iterator iter2=v2.begin();
	int init=0;
	for(iter=v.begin();iter!=v.end();++iter){
		init += (*iter)*(*iter2);
		++iter2;
	}
	return init;
}

//template <typename T>
//int operator*( const std::vector<T>& v1,const std::vector<T>& v2){
//	return inner_product(v1.begin(),v1.begin(),v2.begin(),0);
//}

void pSwap(int* const pX,int* const pY){
	int temp=*pX;
	*pX=*pY;
	*pY=temp;
}

template <typename T>
void mostrar(const T*const p){
	std::cout <<*p<<std::endl;
}

std::string* ptrToElement(std::vector<std::string>* const pVec,int i){
		return &((*pVec)[i]);
}

void inicializarArraySec(int* const array,int SIZE,int inicio){
	int valor = inicio;
	for(int i=0;i<SIZE;++i){
		array[i]=valor;
		valor++;
	}
}

void displayArray(const int* const array, int SIZE){
	for(int i=0;i<SIZE;++i){
		std::cout << array[i]<<" ";
	}
	std::cout << std::endl;
}

void incArraySec(int* const array,int SIZE,int inc){
	for(int i=0;i<SIZE;++i){
		array[i]+=inc;
	}
}

int foo(int y,int x=1){
	return y+x;
}

float foo(int y){
	return y;
}

float foo(int y, float z){
	return y*z;
}

void testCopia(CritterHeap c){
	c.greet();
}

