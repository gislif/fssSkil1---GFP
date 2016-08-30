// Gísli's c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int array_size = 7;


bool isOrdered(int a[]) {

	for (int i = 0; i < array_size - 1; i++)
	{
		if (a[i] < a[i + 1]){
			return false;
		}
		cout << a[i] << endl;
	}
	return true;
}

int myPow(int a, int b) {

	int result = 1;

	for (int i = 0; i < b; i++) {
		// Gera eitthva� vi� result h�rna inni

		// ***
	}

	return result;
}

int main() {

	// Fyrir d�mi 1
	cout << "Pow: " << myPow(2, 3) << endl;

	// Fyrir d�mi 3
	int a[array_size] = { 1, 2, 3, 4, 5, 6, 7 };

	return 0;
}