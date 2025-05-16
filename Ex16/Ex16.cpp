#include <iostream>
using namespace std;

int main()
{
    int number, odd_digit_count = 0;
    cin >> number;

    while (number != 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            ++odd_digit_count;
        }
        number /= 10;
    }

    cout << odd_digit_count;
    return 0;
}
