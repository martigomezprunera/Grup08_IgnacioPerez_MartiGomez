// Grup08IgnacioPerezMartiGomez.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <queue>
#include <string>


//Function Template
template <typename T, int b = 1>
void fExample1(T a)
{

}

//Class Template
template <typename T1, typename T2>
class CExample2
{
public:
	std::vector<T1> aV;
	T2 a;
};

//Struct Template
template <typename T>
struct node
{
	T info;
	node *next;
};

//SwapValues
template<typename T>
void swapValues(T &variable1, T &variable2)
{
	T temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}

//SuperQueu
template <typename T>
class SuperQueu
{
public:
	node<T> *first;
	node<T> *last;
	int tam;

	//CONSTRUCTORES
	SuperQueu() :
		last(nullptr), first(nullptr), tam(0)
	{
	}

	SuperQueu(SuperQueu &e):
		this->last(e.last),
		this->first(e.first),
		this->size(e.tam)
	{
	}

	//METODOS
	int size()
	{
		return tam;
	}

	void push(T a) 
	{
		node<T> *node = new node<T>;
		node->info = a;
		node->next = nullptr;
		if (last != nullptr)
		{
			last->next = node;
		}
		else
		{
			first = node;
		}

		last = node;
		tam++;
	}

	void pop()
	{
		if (tam > 0)
		{
			node<T> *aux = first->next;
			delete first;
			first = aux;
			tam--;
		}
	}
};


void main()
{
	//EJEMPLOS
	//Function
	fExample1<int>(7);
	fExample1<int, 20>(7);

	//Clase
	CExample2<int, int>myObject;

	//Struct
	node<int> first;
	first.info = 1;
	first.next = nullptr;

	//SwapValues
	//INTs
	int a = 1;
	int b = 8;

	//CHARs
	char c = 'a';
	char d = 'z';

	//STRINGs
	std::string e = "Hola";
	std::string f = "Adios";

	//FUNCTION SWAPVALUES
	swapValues<int>(a, b);
	swapValues<char>(c, d);
	swapValues<std::string>(e, f);

	//SUPERQUEU
	std::string s = "Buenos Dias";
	SuperQueu<std::string> *super1 = new SuperQueu<std::string>();
	super1->push("ADIOS");
	super1->push("Buenas TARDES");
	super1->push("BUENAS NOCHES");
	super1->pop();
	
	std::cout << super1->first->info << std::endl;
	std::cout << super1->size() << std::endl;

}

