#include <iostream>
using namespace std;

int main()
{
    double value;
    cin >> value;

    int hundredths_digit = static_cast<int>(value * 100) % 10;
    cout << hundredths_digit;

    return 0;
}
