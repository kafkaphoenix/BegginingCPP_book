/*
 * test.cpp
 *
 *  Created on: 6 mar. 2017
 *      Author: sorak
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

#include "critter.h"
#include "things.h"

using namespace std;

int main(){

//	const int MAX=10;
//	string s = "Welcome back mate!";
//	typedef unsigned short ushort;
//	typedef unsigned long ulong;
//	long double ld;
//	ushort var1=2;
//	ulong var2=3;
//	unsigned int score;
//	int v1,v2;

//	cout << s <<endl;
//	cout << "Size of long double: " << sizeof(ld);
//	cout << "\n\t horizontal tab";
//	cout << "\n\?\'\" vertical tab doesn't look to work";
//	cout << "\n\tvar1: " << var1 << "\n\tvar2: " << var2 << endl;
//
//	//integer wrap around
//	score = 4294967295;
//	cout << "\nscore: " << score << endl;
//	++score;
//	cout << "score: " << score << endl;
//
//	int lives =3;
//	int bonus = ++lives * 10;
//	cout << "lives, bonus = " << lives << ", " << bonus << endl;
//	lives = 3;
//	bonus = lives++ * 10; //aplica live ++ después de evaluar la expresión
//	cout << "lives, bonus = " << lives << ", " << bonus << endl;
//
//	cout << "Seven divided by three is " << 7 / 3 << endl;
//	cout << "Seven divided by three is " << 7.0 / 3 << endl;
//	cout << "Seven divided by three is " << 7 / 3.0 << endl;
//	cout << "Seven divided by three is " << 7.0 / 3.0 << endl;

//	int *c;
//	//int *c = (int*)malloc(sizeof(int));
//
//	c[3]=5;
//
//	cout << *c;

	/* initialize random seed: */
//	srand(time(0));
//
//	v1 = rand() % 100;         // v1 in the range 0 to 99
//	v2 = rand() % 30 + 1985;   // v3 in the range 1985-2014
//
//	cout << RAND_MAX << "\n" << time(0) << "\n"<< v1 << "\n"<< v2;

//	string w1 = "Game";// copy initialization (implicit call) does a conversion
//	string w2("Over");// direct initialization (explicit call)
//	string w3(3,'!');
	//string w4= new string("FIN"); //No puede convertir un *string a string
	//string * w4 = new string("H");//Nop (rompe la idea de string de usar buffer)
	//Se maneja sólo

	//	char* s= "literal"; //Puntero a string literal, no tienes que
	//delete string literals. "literal" es read only normalmente y x está en stack
	//	s[1]=2; error
	//
	//	cout << s;

	//string in c++ are mutable, you can also make it immutable via the keyword const

//	string phrase = w1+" "+w2+w3;
//	cout << "\t" << phrase << "\n";
//	cout << phrase.size();
//	cout << phrase[0];
//
//	phrase[0] = 'L';
//
//	cout << "\t" << phrase << "\n";

//	new se libera con delete y no tienes que especificar el tamaño como en malloc
//	heap: variables dinámicas (new es equivalente al malloc de c)
//	stack: memoria de variables normales (tipos de datos primitivos) y el orden de
//	resolucion de funciones y las funciones (su espacio de memoria)
//	todoo lo que no sea new está en el stack
//	buffer: zona de memoria para transferir datos

//	MyClass * p1 = new MyClass[5];
//
//	MyClass * p1 = new MyClass;
//	      // allocates memory by calling: operator new (sizeof(MyClass))
//	      // and then constructs an object at the newly allocated space
//	cout << phrase.find("Over") <<endl;
//	cout << phrase.find("Over",4) <<endl; //busca a partir del num dado

//	char c [5] = {'a','a','a','a','a'};
//
//
//
//	for(int i=0;i<sizeof(c);++i){
//		cout << c[i];
//	}

//	string::npos;
//	char map[12][20];
//	for(int i=0;i<12;++i){
//		for(int j=0;j<20;++j){
//			map[i][j]='~';
//			cout << map[i][j];
//		}
//		cout << endl;
//	}
//
//	string s;
//	s.length();
//	s.size(); //Equivalentes

//	const char* ar="armor";
//	vector <string> inventory;
//	inventory.push_back("sword");
//	inventory.push_back(ar);
//	inventory.push_back("shield");
//	cout <<"Items in your sack:"<<endl;
//	for(unsigned int i=0;i<inventory.size();++i){
//		cout << inventory[i] << endl;
//	}
//
//	cout << "\t"<<inventory.front()<<endl;
//	cout << "\t"<<inventory.back()<<endl;
//	inventory.pop_back();
//	cout <<"Say goodbye to your shield "<<endl;
//	cout <<"Items in your sack:"<<endl;
//	for(unsigned int i=0;i<inventory.size();++i){
//		cout << inventory[i] << endl;
//	}
//	cout << "Iterator's time\n";
//	vector<string>::iterator myIterator;
//	vector<string>::const_iterator iter;
//	inventory.push_back("rare shield");
//	myIterator = inventory.begin();
//	*myIterator="uncommon sword";
//	inventory.erase(inventory.begin()+1);
//	inventory.insert(inventory.begin()+1,"crossbow");
//	inventory.insert(inventory.begin()+3,"set armor");
//	/*using push_back may invalidate all iterator referencing
//	*the vector porque puede superar el tamaño y hacer resize hay que hacer un nuevo
//	*inventory.begin */
//	/*Calling the insert() & erase() member function on a vector invalidates all of the iterators that reference
//	*elements after the insertion/deleteion point because all of the elements after the insertion point are shifted
//	*down by one/shifted up by one. */
//
//	cout <<"Your items: \n";
//	recorrerIter(inventory);

//	double start_s=clock();
//
//	vector<char>alphabet;
//	for(int i=97;i<=122;++i){
//		alphabet.push_back(char(i));
//		if(i==int('n')){
//			alphabet.push_back('ñ');
//		}
//	}
//	vector<char>::const_iterator iter;
//	recorrerIter(alphabet);
//	iter=find(alphabet.begin(),alphabet.end(),'ñ');
//	if(iter!=alphabet.end()){
//		cout <<endl<< "Está la letra "<<*iter<<endl;
//	}
//
//	vector<int>numbers;
//	for(int j=0;j<MAX;++j){
//		numbers.push_back(j);
//	}
//
//	srand(static_cast<unsigned int>(time(0)));//If you don't set the seed, it will always be the same
//	random_shuffle(numbers.begin(),numbers.end());
//	random_shuffle(alphabet.begin(),alphabet.end());
//	recorrerIter(alphabet);
//	cout<<endl;
//
//	recorrerIter(numbers);
//	cout <<endl;
//	sort(numbers.begin(),numbers.end());
//	recorrerIter(numbers);
//	string s("hola");
//	random_shuffle(s.begin(),s.end());
//	cout <<endl<<s<<endl;
//
//
//	while(s!="hola"){
//		string antes=s;
//		random_shuffle(s.begin(),s.end());
//		if(s=="hola"){
//			cout<<"Es posible "<<antes<<" vaya shuffle "<<s<<endl;
//		}
//	}
//
//	vector<int>scores(10,0);
//	cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<endl;
//	scores.push_back(0);
//	scores.resize(10);
//	cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<endl;
//	scores.push_back(0);
//	scores.reserve(30);
//	cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<endl;
//	scores.resize(10);
//	cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<endl;
//	recorrerIter(scores);
//	double stop_s=clock();
//	cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

//
//	vector <int> v1,v2,v3(2,4),v4(2,1);
//	int x=0;
//	int v5[3]={1,2,3};
//	int v6[3]={2,3,4};

//	srand(static_cast<int> (time(0)));
//	generate_n(back_inserter(v1),3,uniqueNumber);
//	generate_n(back_inserter(v2),v1.size(),uniqueNumber);

//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);

//	v2.push_back(4);
//	v2.push_back(5);
//	v2.push_back(6);

//	recorrerIter(v1);
//	cout<<endl;
//	recorrerIter(v2);
//	cout<<endl;
//	x=inner_product(v1.begin(),v1.end(),v2.begin(),0);
//	cout << x;
//	cout<<endl;
//	cout << v3*v4;
//	cout<<endl;
//	recorrerIter(v3);
//	cout<<endl;
//	recorrerIter(v4);
//	cout<<endl;
//	x=inner_product(v5,v5+3,v6,0);
//	cout<<x<<endl;

//	vector<string> a(10,"po"),b;
//	copy(a.begin(),a.end(),back_inserter(b));
//	recorrerIter(b);

//	char a,b;
//
//	cout <<"Define el carácter a: "<<endl;
//	cin >> a;
//	cin.ignore();
//	cout <<a<<endl<<"Define un segundo b: "<<endl;
//	cin.get(b);
//	cout <<b;

//	string linea;
//	ofstream outfile;
//
//	outfile.open("prueba.txt",ios::app);
//	if(outfile.is_open()){
//		cout << "Enter your name: ";
//		getline(cin,linea);
//		outfile << linea<<endl;
//		outfile.close();
//	}
//
//
//	ifstream infile;
//	infile.open("prueba.txt");
//	if(infile.is_open()){
//		//		while(!infile.eof()){
//		//
//		//			cout << linea;
//		//		}
//		while(getline(infile,linea)){
//			cout << linea<<endl;
//		}
//
//		infile.close();
//	}else{
//		cout << "Unable to open file";
//	}

//	string linea1;
//	string pre="localidades.add(new Localidad(\"",post="\", provincia));";
//	ifstream infile;
//	ofstream outfile;
//
//	infile.open("prueba.txt");
//	if(infile.is_open()){
//		outfile.open("prueba2.txt",ios::trunc);
//		outfile.close();
//		while(getline(infile,linea1)){
//			outfile.open("prueba2.txt",ios::app);
//			if(outfile.is_open()){
//				pre.append(linea1);
//				pre.append(post);
//				outfile << pre<<endl;
//				outfile.close();
//				pre.erase(pre.begin()+31,pre.end());
//			}
//
//		}
//
//		infile.close();
//	}else{
//		cout << "Unable to open file";
//	}
//
//	int x = 5;
//	int& rx=x;
//	int* pointer=&x;
//	cout << pointer <<endl<< *pointer<<endl;
//
//	int a[]={5};
//	pointer=nullptr;
//	pointer=a;
//
//	cout << pointer <<endl<< *pointer << endl;
//
//	*pointer=7;
//	string s = "a";
//	string *pstring=&s;
//
//	cout << pstring <<" "<< *pstring<<"\n"<<"size 1: "<< pstring->size()<<" size 2: "<< (*pstring).size() <<endl;
//
//
//	const int num=6;
//	const int * const pNum=&num;//puntero constante(no puede cambiar la dirección)
//	//a un valor constante (no puede alterarlo) puede asignarse variables y constantes
//	int * const pNum2=&x;//puntero constante debe inicializarse no puede cambiar la dirección
//	const int * pScore;//puntero a valor constante, no puede alterar el valor,
//	//se le puede asignar constantes
//	pScore=pNum;
//
//	cout << pNum <<endl<<*pNum<<endl<< pNum2 <<endl<<*pNum2<<endl<< pScore<<endl<<*pScore<<endl;
//	int num2=4;
//
//	cout <<endl<<endl;
//	cout <<"Primero: "<<*pointer<<endl<<"Segundo: "<<*pNum2<<endl;
//
//	pSwap(pointer,pNum2);//Punteros hacia las variables
//
//	cout <<"Primero: "<<*pointer<<endl<<"Segundo: "<<*pNum2<<endl;
//	cout <<endl<<endl;
//	cout <<"Primero: "<<num2<<endl<<"Segundo: "<<x<<endl;
//
//	pSwap(&num2,&x);//Con las direcciones de las variables
//
//	cout <<"Primero: "<<num2<<endl<<"Segundo: "<<x<<endl;
//
//	mostrar(pNum);//Puntero constante con valor constante
//	mostrar(pScore);//Puntero con valor constante
//	mostrar(pNum2);//Puntero constante
//	mostrar(&num);//Direccion de una variable

//	vector <string> inventory;
//	inventory.push_back("Sword");
//	inventory.push_back("Shield");
//
//	string str = *(ptrToElement(&inventory,0));
//	string* pStr = ptrToElement(&inventory,1);
//	cout<<str<<endl<<*pStr<<endl;
//	*pStr="Healing Potion";
//	cout <<*pStr<<endl;
//	recorrerIter(inventory);

//	const int SIZE=10;
//	int array[SIZE];
//	int inicio=3;
//
//	inicializarArraySec(array,SIZE,inicio);
//	displayArray(array,SIZE);
//
//	cout<<(*array)<<endl;
//	cout<<(*(array+3))<<endl;
//	cout<<array[3]<<endl;
//	int inc=50;
//
//	incArraySec(array,SIZE,inc);
//	displayArray(array,SIZE);

//	char c='1';
//	fptr fp = f(c);
//
//	cout << fp();
//
//	return 0;

//	int a = 10;
//	int& b = a;
//	int* c = &b;
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &(*c) << endl;

//	string s= "hola";
//	string* p1=&s;
//	string* p2=p1;
//
//	cout<<p2->size();

	Critter c1,c2(8,4),c3,c4; //c1() es incorrecto -> c1

	c1.setHunger(4);
	c1.setBoredom(5);

	c1.greet();
	c2.greet();
	c3.greet();

	cout <<"Hay en total: "<<c1.getTotal()<<" critters"<<endl;

	cout << "c1 Boredom: " << c1.getBoredom() << endl << "c2 Boredom: " <<c2.getBoredom()<<endl;

	try{
		c2.setHunger(-2);
	}catch(exception const& e){
		cerr<<endl<<"Exception: "<<e.what()<<endl;
	}

	c3.~Critter();
	c4.~Critter();
	cout <<"Hay en total: "<<c1.getTotal()<<" critters"<<endl;

	return 0;
}

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

int Critter::s_Total=0;

int Critter::getTotal(){
	return s_Total;
}

void Critter::increaseTotal(){
	++s_Total;
}

void Critter::decreaseTotal(){
	--s_Total;
}

void Critter::greet()
{
	cout <<"Hola, tengo hambre: "<<m_Hunger<<endl;
}

void Critter::setHunger(int h){
	if(h<0){
		throw invalid_argument("Número negativo");
	}else{
		m_Hunger=h;
	}

}

int Critter::getHunger() const{
	return m_Hunger;
}

void Critter::setBoredom(int b){
	if(b<0){
		throw invalid_argument("Número negativo");
	}else{
		m_Boredom=b;
	}

}

int Critter::getBoredom() const{
	return m_Boredom;
}

Critter::Critter(){
	increaseTotal();
}

Critter::Critter(int x, int y):m_Hunger(x),m_Boredom(y){
	increaseTotal();
}

Critter::~Critter(){
	decreaseTotal();
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
