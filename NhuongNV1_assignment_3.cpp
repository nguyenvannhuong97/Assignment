#include<math.h>
#include<iostream>
using namespace std;

bool checkLeapYear(int );
int checkDayInMonth(int, int );
void nextDay(int, int, int );
void previousDay(int, int, int );

int main()
{
    int year, month, day;
    cout << "Enter Day:\n";
    cin >> day;
    cout << "Enter Month:\n";
    cin >> month;
    cout << "Enter Year:\n";
    cin >> year;
    int n;
    do
    {
        cout << "\n==============MENU================\n";
        cout << "\n1.Find the number of Month";
        cout << "\n2.Show next day (dd/mm/yyyy)";
        cout << "\n3.Show previous day (dd/mm/yyyy)";
        cout << "\nEnter choose:\n";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Number days in month: " << checkDayInMonth(year, month);
            break;
        case 2:
            nextDay(year, month, day);
            break;
        case 3:
            previousDay(year, month, day);
            break;
        default:
            break;
        }
    } while (n <= 4);

    return 0;
}

bool checkLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int checkDayInMonth(int year, int month)
{
    int numberDayInMonth;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        numberDayInMonth = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        numberDayInMonth = 30;
        break;
    case 2:
        if (checkLeapYear(year)) {
            numberDayInMonth = 29;
        }
        else
            numberDayInMonth = 28;
        break;
    default:
        break;
    }
    return numberDayInMonth;
}
void nextDay(int year, int month, int day)
{
    day++;
    if (day > checkDayInMonth(year, month))
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
    cout << "Show Next Day:" << day << "/" << month << "/" << year << endl;
}

void previousDay(int year, int month, int day)
{
    day--;
    if (day == 0)
    {
        month--;
        if (month == 0)
        {
            month = 12;
            year--;
        }
        day = checkDayInMonth(year, month);
    }
    cout << "Show Previous Day:" << day << "/" << month << "/" << year << endl;
}