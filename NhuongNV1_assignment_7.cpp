#include<math.h>
#include<iostream>
using namespace std;

float Plus(float a, float b);
float Minus(float a, float b);
float multipty(float a, float b);
float divide(float a, float b);
void operation(float a, float b, float(*p2Func)(float, float));

int main()
{
	float a, b;
	cout << "Nhap vao so a: \n";
	cin >> a;
	cout << "Nhap vao so b: \n";
	cin >> b;
	cout << "\nPlus two number:";
	operation(a, b, &Plus);
	cout << "\nMinus two number:";
	operation(a, b, &Minus);
	cout << "\nMultiply two number:";
	operation(a, b, &multipty);
	cout << "\nDivide two number:";
	operation(a, b, &divide);
	return 0;
}
float Plus(float a, float b) {
	return a + b;
}

float Minus(float a, float b) {
	return a - b;
}

float multipty(float a, float b) {
	return a * b;
}

float divide(float a, float b) {
	if (b != 0) {
		return a / b;
	}
	else {
		return NULL;
	}
}
void operation(float a, float b, float(*p2Func)(float a, float b)) {
	float data = p2Func(a, b);
	cout << "Data:  " << data << "\n";
}