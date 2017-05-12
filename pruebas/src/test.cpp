/*
 * test.cpp
 *
 *  Created on: 6 mar. 2017
 *      Author: sorak
 */

#include "Critter.h"
#include "things.h"
#include "Farm.h"
#include "CritterHeap.h"
#include <iostream>
#include "Player.h"
#include "Lobby.h"
#include "Enemy.h"
#include "Bossu.h"

int main(){

//	const int MAX=10;
//	std::string s = "Welcome back mate!";
//	typedef unsigned short ushort;
//	typedef unsigned long ulong;
//	long double ld;
//	ushort var1=2;
//	ulong var2=3;
//	unsigned int score;
//	int v1,v2;
//	std::cout << s <<std::endl;
//	std::cout << "Size of long double: " << sizeof(ld);
//	std::cout << "\n\t horizontal tab";
//	std::cout << "\n\?\'\" vertical tab doesn't look to work";
//	std::cout << "\n\tvar1: " << var1 << "\n\tvar2: " << var2 << std::endl;
//
//	//integer wrap around
//	score = 4294967295;
//	std::cout << "\nscore: " << score << std::endl;
//	++score;
//	std::cout << "score: " << score << std::endl;
//
//	int lives =3;
//	int bonus = ++lives * 10;
//	std::cout << "lives, bonus = " << lives << ", " << bonus << std::endl;
//	lives = 3;
//	bonus = lives++ * 10; //aplica live ++ después de evaluar la expresión
//	std::cout << "lives, bonus = " << lives << ", " << bonus << std::endl;
//
//	std::cout << "Seven divided by three is " << 7 / 3 << std::endl;
//	std::cout << "Seven divided by three is " << 7.0 / 3 << std::endl;
//	std::cout << "Seven divided by three is " << 7 / 3.0 << std::endl;
//	std::cout << "Seven divided by three is " << 7.0 / 3.0 << std::endl;
//	int *c;
//	//int *c = (int*)malloc(sizeof(int));
//
//	c[3]=5;
//
//	std::cout << *c;
//	/* initialize random seed: */
//	srand(time(0));
//
//	v1 = rand() % 100;         // v1 in the range 0 to 99
//	v2 = rand() % 30 + 1985;   // v3 in the range 1985-2014
//
//	std::cout << RAND_MAX << "\n" << time(0) << "\n"<< v1 << "\n"<< v2;
//	std::string w1 = "Game";// copy initialization (implicit call) does a conversion
//	std::string w2("Over");// direct initialization (explicit call)
//	std::string w3(3,'!');
//std::string w4= new std::string("FIN"); //No puede convertir un *std::string a std::string
//std::string * w4 = new std::string("H");//Nop (rompe la idea de std::string de usar buffer)Se maneja sólo
//	char* s= "literal"; //Puntero a std::string literal, no tienes que
//delete std::string literals. "literal" es read only normalmente y x está en stack
//	s[1]=2; error
//
//	std::cout << s;
//std::string in c++ are mutable, you can also make it immutable via the keyword const
//	std::string phrase = w1+" "+w2+w3;
//	std::cout << "\t" << phrase << "\n";
//	std::cout << phrase.size();
//	std::cout << phrase[0];
//
//	phrase[0] = 'L';
//
//	std::cout << "\t" << phrase << "\n";
//	/*new se libera con delete y no tienes que especificar el tamaño como en malloc
//	heap: variables dinámicas (new es equivalente al malloc de c)
//	stack: memoria de variables normales (tipos de datos primitivos) y el orden de
//	resolucion de funciones y las funciones (su espacio de memoria)
//	todoo lo que no sea new está en el stack
//	buffer: zona de memoria para transferir datos*/
//	MyClass * p1 = new MyClass[5];
//
//	MyClass * p1 = new MyClass;
//	      // allocates memory by calling: operator new (sizeof(MyClass))
//	      // and then constructs an object at the newly allocated space
//	std::cout << phrase.find("Over") <<std::endl;
//	std::cout << phrase.find("Over",4) <<std::endl; //busca a partir del num dado
//	char c [5] = {'a','a','a','a','a'};
//
//
//
//	for(int i=0;i<sizeof(c);++i){
//		std::cout << c[i];
//	}
//
//	char map[12][20];
//	for(int i=0;i<12;++i){
//		for(int j=0;j<20;++j){
//			map[i][j]='~';
//			std::cout << map[i][j];
//		}
//		std::cout << std::endl;
//	}
//
//	std::string s;
//	s.length();
//	s.size(); //Equivalentes
//	const char* ar="armor";
//	vector <std::string> inventory;
//	inventory.push_back("sword");
//	inventory.push_back(ar);
//	inventory.push_back("shield");
//	std::cout <<"Items in your sack:"<<std::endl;
//	for(unsigned int i=0;i<inventory.size();++i){
//		std::cout << inventory[i] << std::endl;
//	}
//
//	std::cout << "\t"<<inventory.front()<< std::endl;
//	std::cout << "\t"<<inventory.back()<< std::endl;
//	inventory.pop_back();
//	std::cout <<"Say goodbye to your shield "<<std::endl;
//	std::cout <<"Items in your sack:"<<std::endl;
//	for(unsigned int i=0;i<inventory.size();++i){
//		std::cout << inventory[i] << std::endl;
//	}
//	std::cout << "Iterator's time\n";
//	vector<std::string>::iterator myIterator;
//	vector<std::string>::const_iterator iter;
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
//	std::cout <<"Your items: \n";
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
//		std::cout <<std::endl<< "Está la letra "<<*iter<<std::endl;
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
//	std::cout<<std::endl;
//
//	recorrerIter(numbers);
//	std::cout <<std::endl;
//	sort(numbers.begin(),numbers.end());
//	recorrerIter(numbers);
//	std::string s("hola");
//	random_shuffle(s.begin(),s.end());
//	std::cout <<std::endl<<s<<std::endl;
//
//
//	while(s!="hola"){
//		std::string antes=s;
//		random_shuffle(s.begin(),s.end());
//		if(s=="hola"){
//			std::cout<<"Es posible "<<antes<<" vaya shuffle "<<s<<std::endl;
//		}
//	}
//
//	vector<int>scores(10,0);
//	std::cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<std::endl;
//	scores.push_back(0);
//	scores.resize(10);
//	std::cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<std::endl;
//	scores.push_back(0);
//	scores.reserve(30);
//	std::cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<std::endl;
//	scores.resize(10);
//	std::cout <<"Size "<<scores.size()<<" Capacidad "<<scores.capacity()<<std::endl;
//	recorrerIter(scores);
//	double stop_s=clock();
//	std::cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << std::endl;
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
//	std::cout<<std::endl;
//	recorrerIter(v2);
//	std::cout<<std::endl;
//	x=inner_product(v1.begin(),v1.end(),v2.begin(),0);
//	std::cout << x;
//	std::cout<<std::endl;
//	std::cout << v3*v4;
//	std::cout<<std::endl;
//	recorrerIter(v3);
//	std::cout<<std::endl;
//	recorrerIter(v4);
//	std::cout<<std::endl;
//	x=inner_product(v5,v5+3,v6,0);
//	std::cout<<x<<std::endl;
//	vector<std::string> a(10,"po"),b;
//	copy(a.begin(),a.end(),back_inserter(b));
//	recorrerIter(b);
//	char a,b;
//
//	std::cout <<"Define el carácter a: "<<std::endl;
//	std::cin >> a;
//	std::cin.ignore();
//	std::cout <<a<<std::endl<<"Define un segundo b: "<<std::endl;
//	std::cin.get(b);
//	std::cout <<b;
//	std::string linea;
//	ofstream outfile;
//
//	outfile.open("prueba.txt",ios::app);
//	if(outfile.is_open()){
//		std::cout << "Enter your name: ";
//		getline(std::cin,linea);
//		outfile << linea<<std::endl;
//		outfile.close();
//	}
//
//
//	ifstream infile;
//	infile.open("prueba.txt");
//	if(infile.is_open()){
//		//		while(!infile.eof()){
//		//
//		//			std::cout << linea;
//		//		}
//		while(getline(infile,linea)){
//			std::cout << linea<<std::endl;
//		}
//
//		infile.close();
//	}else{
//		std::cout << "Unable to open file";
//	}
//	std::string linea1;
//	std::string pre="localidades.add(new Localidad(\"",post="\", provincia));";
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
//				outfile << pre<<std::endl;
//				outfile.close();
//				pre.erase(pre.begin()+31,pre.end());
//			}
//
//		}
//
//		infile.close();
//	}else{
//		std::cout << "Unable to open file";
//	}
//
//	int x = 5;
//	int& rx=x;
//	int* pointer=&x;
//	std::cout << pointer <<std::endl<< *pointer<<std::endl;
//
//	int a[]={5};
//	pointer=nullptr;
//	pointer=a;
//
//	std::cout << pointer <<std::endl<< *pointer << std::endl;
//
//	*pointer=7;
//	std::string s = "a";
//	std::string *pstd::string=&s;
//
//	std::cout << pstd::string <<" "<< *pstd::string<<"\n"<<"size 1: "<< pstd::string->size()<<" size 2: "<< (*pstd::string).size() <<std::endl;
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
//	std::cout << pNum <<std::endl<<*pNum<<std::endl<< pNum2 <<std::endl<<*pNum2<<std::endl<< pScore<<std::endl<<*pScore<<std::endl;
//	int num2=4;
//
//	std::cout <<std::endl<<std::endl;
//	std::cout <<"Primero: "<<*pointer<<std::endl<<"Segundo: "<<*pNum2<<std::endl;
//
//	pSwap(pointer,pNum2);//Punteros hacia las variables
//
//	std::cout <<"Primero: "<<*pointer<<std::endl<<"Segundo: "<<*pNum2<<std::endl;
//	std::cout <<std::endl<<std::endl;
//	std::cout <<"Primero: "<<num2<<std::endl<<"Segundo: "<<x<<std::endl;
//
//	pSwap(&num2,&x);//Con las direcciones de las variables
//
//	std::cout <<"Primero: "<<num2<<std::endl<<"Segundo: "<<x<<std::endl;
//
//	mostrar(pNum);//Puntero constante con valor constante
//	mostrar(pScore);//Puntero con valor constante
//	mostrar(pNum2);//Puntero constante
//	mostrar(&num);//Direccion de una variable
//	vector <std::string> inventory;
//	inventory.push_back("Sword");
//	inventory.push_back("Shield");
//
//	std::string str = *(ptrToElement(&inventory,0));
//	std::string* pStr = ptrToElement(&inventory,1);
//	std::cout<<str<<std::endl<<*pStr<<std::endl;
//	*pStr="Healing Potion";
//	std::cout <<*pStr<<std::endl;
//	recorrerIter(inventory);
//	const int SIZE=10;
//	int array[SIZE];
//	int inicio=3;
//
//	inicializarArraySec(array,SIZE,inicio);
//	displayArray(array,SIZE);
//
//	std::cout<<(*array)<<std::endl;
//	std::cout<<(*(array+3))<<std::endl;
//	std::cout<<array[3]<<std::endl;
//	int inc=50;
//
//	incArraySec(array,SIZE,inc);
//	displayArray(array,SIZE);
//	char c='1';
//	fptr fp = f(c);
//
//	std::cout << fp();
//
//	return 0;
//	int a = 10;
//	int& b = a;
//	int* c = &b;
//	std::cout << &a << std::endl;
//	std::cout << &b << std::endl;
//	std::cout << &(*c) << std::endl;
//	std::string s= "hola";
//	std::string* p1=&s;
//	std::string* p2=p1;
//
//	std::cout<<p2->size();
//	Critter c1,c2(8,4,"pepe"),c3,c4; //c1() es incorrecto -> c1
//
//	c1.setHunger(4);
//	c1.setBoredom(5);
//
//	c1.greet();
//	c2.greet();
//	c3.greet();
//
//	std::cout <<"Hay en total: "<<c1.getTotal()<<" critters"<<std::endl;
//
//	std::cout << "c1 Boredom: " << c1.getBoredom() << std::endl << "c2 Boredom: " <<c2.getBoredom()<<std::endl;
//
//	try{
//		c2.setHunger(-2);
//	}catch(exception const& e){
//		std::cerr<<std::endl<<"Exception: "<<e.what()<<std::endl;
//	}
//
//	c3.~Critter();
//	c4.~Critter();
//	std::cout <<"Hay en total: "<<c1.getTotal()<<" critters"<<std::endl;
//	Critter crit(2,2,"Poochie");
//	std::cout << crit.getName() <<std::endl;
//
//	std::cout << "Creating critter farm"<<std::endl;
//	Farm myFarm(4);
//
//	Critter crit2(3,4,"Moe");
//	Critter crit3;
//
//	myFarm.add(Critter(3,4,"Moe"));
//	myFarm.add(Critter());
//	myFarm.add(crit2);
//	myFarm.add(crit3);
//	std::cout <<Critter::getTotal()<<std::endl;
//	myFarm.rollCall();
//
//
//	std::cout <<Critter::getTotal()<<std::endl;
//
//	std::cout<<crit2<<std::endl;
//
//	peek(crit);
//	int* pHeap = new int;
//	*pHeap = 10;
//	std::cout <<*pHeap<<std::endl;
//
//	delete pHeap;
//
//	pHeap=nullptr;
//
//	pHeap=intOnHeap();
//
//	std::cout<<*pHeap;
//
//	pHeap=nullptr;
//
//	CritterHeap crit1("Poochie",5);
//	CritterHeap crit2("Pom",3);
//	crit1.greet();
//	crit2.greet();
//	std::cout << "Prueba copia"<<std::endl;
//	testCopia(crit1);
//	std::cout << "Prueba asignación"<<std::endl;
//	crit1=crit2;
//	crit1.greet();
//    /*Al trabajar con heap en clases (usar punteros con new) es
//	 *importante redefinir delete para evitar memory leaks, asignacion
//	 *y copia para evitar shallow copies
//	 */
//
//	testCopia(CritterHeap());
//
//	Lobby lb;
//	Lobby lb1;
//	Lobby lb2;
//	Lobby lb3;
//	int choice;
//	std::string name;
//	Player* p;
//
//	do{
//		std::cout << lb;
//		std::cout << "\nGAME LOBBY\n";
//		std::cout << "0 - Exit the program.\n";
//		std::cout << "1 - Add a player to the lobby.\n";
//		std::cout << "2 - Remove a player from the lobby.\n";
//		std::cout << "3 - Clear the lobby.\n";
//		std::cout << std::endl << "Enter choice: ";
//		std::cin >> choice;
//		switch (choice)
//		{
//		case 0: std::cout << "Good-bye.\n"; break;
//		case 1: lb.addPlayer(); break;
//		case 2:
//
//			std::cout << "Insert name: ";
//			std::cin >> name;
//			p=lb.searchPlayer(name);
//			if(p==nullptr){
//				std::cerr<<"Player does not exist";
//			}else{
//				lb.removePlayer(*p);
//			}
//			break;
//		case 3: lb.clear(); break;
//		default: std::cout << "That was not a valid choice.\n";
//		}
//	}while(choice!=0);
//
//	std::cout<<"Enemy created"<<std::endl;
//	Enemy e(3);
//	e.attack();
//
//	std::cout<<"Boss created"<<std::endl;
//	Bossu e1(6,4);
//	e1.specialAttack();

	Enemy e3(3);
	Enemy e4(e3);
	Enemy e5(1);
	e3.attack();
	e4.attack();
	e4=e5;
	e4.attack();

	Bossu b3(3,2);
	Bossu b4(b3);
	Bossu b5(1,2);
	b3.specialAttack();
	b4.specialAttack();
	b4=b5;
	b4.specialAttack();
	return 0;
}


