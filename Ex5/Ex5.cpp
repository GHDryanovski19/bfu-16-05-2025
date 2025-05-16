#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int d1 = number / 1000;
    int d2 = (number / 100) % 10;
    int d3 = (number / 10) % 10;
    int d4 = number % 10;

    int num1 = d1 * 100 + d3 * 10 + d4;
    int num2 = d1 * 100 + d2 * 10 + d4;

    cout << num1 + num2;
    return 0;
}
