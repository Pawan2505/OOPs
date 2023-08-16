#include"complex.h"
#include<iostream>
using namespace std;

complex::complex() {
	real = imag = 1;
}
void complex::show() {
	cout<<real<<"+j"<<imag;
}

