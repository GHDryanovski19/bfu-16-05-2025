#include <iostream>
using namespace std;

int main()
{
    int input, largest_digit = 0;
    cin >> input;

    while (input != 0) {
        int digit = input % 10;
        if (digit > largest_digit) {
            largest_digit = digit;
        }
        input /= 10;
    }

    cout << largest_digit;
    return 0;
}
