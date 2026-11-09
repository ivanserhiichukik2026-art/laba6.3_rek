
#include <iostream>
#include <iomanip>

using namespace std;

void readArray(int a[], int n, int i = 0) // введення масиву
{
    if (i >= n)
        return;

    cin >> a[i];

    readArray(a, n, i + 1);
}

template <typename T>
void readArrayTemplate(T a[], int n, int i = 0)
{
    if (i >= n)
        return;

    cin >> a[i];

    readArrayTemplate(a, n, i + 1);
}

void printArray(const int a[], int n, int i = 0) // виведення масиву
{
    if (i >= n)
    {
        cout << endl;
        return;
    }

    cout << setw(5) << a[i];

    printArray(a, n, i + 1);
}

template <typename T>
void printArrayTemplate(const T a[], int n, int i = 0)
{
    if (i >= n)
    {
        cout << endl;
        return;
    }

    cout << setw(5) << a[i];

    printArrayTemplate(a, n, i + 1);
}

int countOdd(const int a[], int n, int i = 0) // підрахунок непарних числ
{
    if (i >= n)
        return 0;

    int count = 0;

    if (a[i] % 2 != 0)
    {
        count = 1;
    }

    return count + countOdd(a, n, i + 1);
}

template <typename T>
int countOddTemplate(const T a[], int n, int i = 0)
{
    if (i >= n)
        return 0;

    int count = 0;

    if (a[i] % 2 != 0)
    {
        count = 1;
    }

    return count + countOddTemplate(a, n, i + 1);
}

int main()
{
    const int MAX = 100;
    int a[MAX];
    int b[MAX];
    int n;

    cout << "Enter n (1..100): ";
    cin >> n;

    if (!cin || n < 1 || n > MAX)
    {
        return 1;
    }

    cout << "Enter array elements:" << endl;
    readArray(a, n);

    cout << "Enter array elements (template):" << endl;
    readArrayTemplate(b, n);

    cout << "Array:" << endl;
    printArray(a, n);

    cout << "Array (template):" << endl;
    printArrayTemplate(b, n);

    cout << "Count (function) = " << countOdd(a, n) << endl; //звичайна функція , яка обчислює кількість непарних елементів

    cout << "Count (template) = " << countOddTemplate(b, n) << endl; //шаблон функції, який обчислює кількість непарних елементів

    return 0;
}
