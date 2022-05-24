#include <iostream>
#include <string>
using namespace std;


#pragma once
class String
{
private:
	char* str;
public:
	friend String operator + (const String&, const String&);
	friend ostream& operator << (ostream&, String&);
	friend istream& operator >> (istream&, String&);
};

