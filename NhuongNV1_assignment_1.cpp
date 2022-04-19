#include <iostream>
using namespace std;

int symmetricalNumber(int);
bool checkSymmetricalNumber(int);

int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    if (checkSymmetricalNumber(n)) {
        cout << "Symmetrical Number\n";
    }
    else {
        cout << "Not a Symmetrical Number\n";
    }
    return 0;
}

int symmetricalNumber(int n) {
    int reverse = 0;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}

bool checkSymmetricalNumber(int n)
{
    if (n == symmetricalNumber(n))
    {
        return true;
    }
    return false;
}