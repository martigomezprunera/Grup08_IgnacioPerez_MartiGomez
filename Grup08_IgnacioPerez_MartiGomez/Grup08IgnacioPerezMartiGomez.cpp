// Grup08IgnacioPerezMartiGomez.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>


//Function Template
template <typename T>
T fExample1(T a, int b)
{
	return 1;
}

//Class Template
template <class T1, T2>
class CExample2
{
public:
	std::vector<T1, int a> aV;
};

//Struct Template
template <class miStruct>
struct node
{
	int info;
	node *next;
};



int main()
{
    return 0;
}

