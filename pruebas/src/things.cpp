/*
 * things.cpp
 *
 *  Created on: 10 may. 2017
 *      Author: sorak
 */
#include "things.h"

template <typename T>
void recorrerIter(const vector<T>& v){
	typename vector<T>::const_iterator iter;
	for(iter=v.begin();iter!=v.end();++iter){
		cout << *iter<<endl;
	}
	cout << endl;
}

template <typename T>
int operator*(const vector<T>& v,const vector<T>& v2){
	typename vector<T>::const_iterator iter;
	typename vector<T>::const_iterator iter2=v2.begin();
	int init=0;
	for(iter=v.begin();iter!=v.end();++iter){
		init += (*iter)*(*iter2);
		++iter2;
	}
	return init;
}

//template <typename T>
//int operator*( const vector<T>& v1,const vector<T>& v2){
//	return inner_product(v1.begin(),v1.begin(),v2.begin(),0);
//}

void pSwap(int* const pX,int* const pY){
	int temp=*pX;
	*pX=*pY;
	*pY=temp;
}

template <typename T>
void mostrar(const T*const p){
	cout <<*p<<endl;
}

string* ptrToElement(vector<string>* const pVec,int i){
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
		cout << array[i]<<" ";
	}
	cout << endl;
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



