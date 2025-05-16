#include <iostream>
using namespace std;

int main()
{
    int number, smallest_digit;
    cin >> number;

    smallest_digit = number % 10;

    while (number != 0) {
        int current_digit = number % 10;
        if (current_digit < smallest_digit) {
            smallest_digit = current_digit;
        }
        number /= 10;
    }

    cout << smallest_digit;
    return 0;
}
