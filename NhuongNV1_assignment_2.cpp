#include <iostream>
using namespace std;

int main()
{
	int i, j, r;
    cout << "\n";
    cout << "Ve hinh bang dau sao trong C++:\n";
    cout<< "---------------------------------------";
    cout << "\n\n";

    cout << "Nhap vao so: ";
    cin >> r;

    for (i = 0; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << "\n";
    }

    for (i = r - 1; i >= 1; i--)
    {
        for (j = 1; j <= r - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
  
}
