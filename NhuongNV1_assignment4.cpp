#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void inputArray(int a[], int& n)
{
    do
    {
        printf("\nInput Array: ");
        cin >> n;
        if (n <= 0 || n > MAX)
        {
            printf("\nInvalid element number, please re-enter !");
        }
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++)
    {
        printf("\nInput a[%d]: ", i);
        cin >> a[i];
    }
}

void outputArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

int* get_even_num(int* arr, int* sz)
{
    for (size_t i = 0; i < sizeof(sz); i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%4d", arr[i]);
        }
    }
    return 0;
}

int main()
{
    int n;
    int a[MAX];
    inputArray(a, n);
    outputArray(a, n);
    printf("\nThe even values in the array are: ");
    get_even_num(a, &n);
    printf("\n------------------------\n");
 
    return 0;
}