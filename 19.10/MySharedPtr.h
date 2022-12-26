#pragma once
#include <iostream>
using namespace std;

template<class T>
class MySharedPtr {
	T* number;
	int counter;

public:
	MySharedPtr() {
		number = 0;
		number = nullptr;
		counter = 0;
	}

	MySharedPtr(T* n) {
		number = n;
		counter = 1;
	}

	MySharedPtr(MySharedPtr<T>& mhp) {
		number = mhp.number;
		counter++;
	}

	~MySharedPtr() {
		delete[] number;
	}

	T* GetAdress() {
		cout << "adress: " << number << endl;
		return number;
	}

	int GetCount() {
		return counter;
	}

};
