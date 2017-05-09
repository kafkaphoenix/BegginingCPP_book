/*
 * things.h
 *
 *  Created on: 9 may. 2017
 *      Author: sorak
 */

#ifndef THINGS_H_
#define THINGS_H_

#include<vector>
using namespace std;

template <typename T>
void recorrerIter(const vector<T>&);

template <typename T>
int operator*(const vector<T>&,const vector<T>&);

//template <typename T>
//int operator*( const vector<T>&,const vector<T>&);

void pSwap(int* const,int* const);

template <typename T>
void mostrar(const T*const);

string* ptrToElement(vector<string>* const,int);

void inicializarArraySec(int* const,int,int);

void displayArray(const int* const, int);

void incArraySec(int* const,int,int);

int f1();

int f2();

int foo(int,int);

float foo(int);

float foo(int, float);

#endif /* THINGS_H_ */
