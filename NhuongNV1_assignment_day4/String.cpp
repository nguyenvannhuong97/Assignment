#include "String.h"


/*
String operator + (const String&, const String&);
ostream& operator << (ostream&, String&);
istream& operator >> (istream&, String&);
*/
String operator + (const String& str1, const String& str2)
{
	int i, j, n1, n2;
	n1 = strlen(str1.str);
	n2 = strlen(str2.str);
	j = 0;
	for (i = n1; i < n1 + n2; i++) {
		str1.str[i] = str2.str[j];
		j++;
	}
	str1.str[i] = '\0';

	return str1;
}

istream& operator>>(std::istream& in, String& rhs) {
	in >> rhs.str;
	return in;
}

ostream& operator<<(std::ostream& out, const String& rhs) {
	out << rhs.str;
	return out;
}

int main() {
	String str1, str2, str;
	cin >> str1; cin >> str2;
	str = str1 + str2;
	cout << "The result: ";
	cout << str;
	return 0;
}