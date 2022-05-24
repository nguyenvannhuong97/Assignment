#include <iostream>
#include <string.h>

using namespace std;

#pragma once
class CFraction
{
private:
	int num;
	int den;
public:
	void setNum(int);
	int getNum();
	void setDen(int);
	int getDen();
	CFraction(int, int);

	void ImportData(CFraction& C_Fraction);
	void ExportData(CFraction C_Fraction);
	friend CFraction operator+ (const CFraction&, const CFraction&);
	friend CFraction operator- (const CFraction&, const CFraction&);
	friend CFraction operator* (const CFraction&, const CFraction&);
	friend CFraction operator/ (const CFraction&, const CFraction&);
};

