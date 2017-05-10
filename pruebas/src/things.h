/*
 * things.h
 *
 *  Created on: 9 may. 2017
 *      Author: sorak
 */

#ifndef THINGS_H_
#define THINGS_H_

#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <string>
#include <stdexcept>
#include "CritterHeap.h"

template <typename T>
void recorrerIter(const std::vector<T>&);

template <typename T>
int operator*(const std::vector<T>&,const std::vector<T>&);

//template <typename T>
//int operator*( const std::vector<T>&,const std::vector<T>&);

void pSwap(int* const,int* const);

template <typename T>
void mostrar(const T*const);

std::string* ptrToElement(std::vector<std::string>* const,int);

void inicializarArraySec(int* const,int,int);

void displayArray(const int* const, int);

void incArraySec(int* const,int,int);

int f1();

int f2();

int foo(int,int);

float foo(int);

float foo(int, float);

int* intOnHeap();

void testCopia(CritterHeap);

#endif /* THINGS_H_ */
