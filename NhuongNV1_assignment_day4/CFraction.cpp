#include "CFraction.h"

void CFraction::setNum(int num)
{
	this->num = num;
}
int CFraction::getNum()
{
	return num;
}

void CFraction::setDen(int den)
{
	this->den = den;
}
int CFraction::getDen()
{
	return den;
}
CFraction::CFraction(int num, int den) {
	this->num = num;
	this->den = den;
}
CFraction::~CFraction() {

};

int UCLN(int a, int b) {
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	if (b < 0)
	{
		return b * (-1);
	}
	return a;
}

void CFraction::ImportData(CFraction& C_Fraction)
{
	cout << "\nEnter numerator: ";
	cin >> C_Fraction.num;
	cout << "\nEnter denominator: ";
	cin >> C_Fraction.den;
}

void CFraction::ExportData(CFraction C_Fraction)
{
	cout << "\nFractions after Overloading: " << C_Fraction.num << "/" << C_Fraction.den;
}

CFraction operator+(const CFraction& fra1, const CFraction& fra2)
{
	CFraction data;
	data.num = fra1.num * fra2.den + fra1.den * fra2.num;
	data.den = fra1.den * fra2.den;
	int plus = UCLN(data.num, data.den);
	data.num /= plus;
	data.den /= plus;
	return data;
}
CFraction operator-(const CFraction& fra1, const CFraction& fra2)
{
	CFraction data;
	data.num = fra1.num * fra2.den - fra1.den * fra2.num;
	data.den = fra1.den * fra2.den;
	int minus = UCLN(data.num, data.den);
	data.num /= minus;
	data.den /= minus;
	return data;
}
CFraction operator*(const CFraction& fra1, const CFraction& fra2)
{
	CFraction data;
	data.num = fra1.num * fra2.num;
	data.den = fra1.den * fra2.den;
	int multiply = UCLN(data.num, data.den);
	data.num /= multiply;
	data.den /= multiply;
	return data;
}
CFraction operator/(const CFraction& fra1, const CFraction& fra2)
{
	CFraction data;
	data.num = fra1.num * fra2.den;
	data.den = fra1.den * fra2.num;
	int divide = UCLN(data.num, data.den);
	data.num /= divide;
	data.den /= divide;
	return data;
}

int main()
{
	CFraction x, y;
	cout << "CFraction 1 : " << endl;
	x.ImportData(x);
	cout << "CFraction 2 : " << endl;
	y.ImportData(y);
	cout << "===================out put===================" << endl;
	cout << "plus 2 CFraction : " << endl;
	CFraction plus = x + y;
	plus.ExportData(plus);

	cout << "minus 2 CFraction : " << endl;
	CFraction minus = x - y;
	minus.ExportData(minus);

	cout << "multiply 2 CFraction : " << endl;
	CFraction multiply = x * y;
	multiply.ExportData(multiply);

	cout << "divide 2 CFraction : " << endl;
	CFraction divide = x / y;
	divide.ExportData(divide);
}