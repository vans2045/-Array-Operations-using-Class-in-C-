
#pragma once
#include<iostream>
using namespace std;

class ArrayOps {
private:
	int* arr;
	int size;
public:
	//constructor and deconstructors
	ArrayOps(int n);
	~ArrayOps();

	//accept and display 
	void accept();
	void display();

	//MinMax element
	void findMinMax();

	//sum and avg
	void calculateSumAvg();

	//searching element
	void searchNumber(int key);
};
