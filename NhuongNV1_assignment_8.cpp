#include<iostream>
#include <cstring>
using namespace std;
/**************************************************
int findsubstr(const char *str, char *sub)

Parameter:
const char *str: chuỗi cha
char *sub: chuỗi con
Return value: trả về vị trí xuất hiện chuỗi sub đầu tiên trong chuỗi str, nếu sub không xuất hiện trong str, trả về -1
***************************************************/
int findsubstr(const char* str, char* sub);

int main()
{
	char str[100];
	char sub[50];
	cout << "Input str: \n";
	cin.getline(str, 100);
	cout << "Input sub: \n";
	cin.getline(str, 50);

	cout << findsubstr(str, sub);
	return 0;
}

int findsubstr(const char* str, char* sub)
{
	char* data;
	data = strstr(str, sub);
	if (data != NULL) {
		return strlen(str) - strlen(sub);
	}
	else {
		return -1;
	}
}