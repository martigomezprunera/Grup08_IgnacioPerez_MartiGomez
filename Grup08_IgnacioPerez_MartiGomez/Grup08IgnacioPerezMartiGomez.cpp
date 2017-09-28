// Grup08IgnacioPerezMartiGomez.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>


//Function Template
template <typename T, int b = 1>
T fExample1(T a)
{
	return a;
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
	int info;
	node *next;
};



void main()
{
	//EJEMPLOS
	//Function
	fExample1<int>(7);

	//Clase
	CExample2<int, int>myObject;

	//Struct
	node<int> first;
	first.info = 1;
	first.next = nullptr;
}

