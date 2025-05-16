#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int digit_sum = 0, digit_product = 1;

    while (number != 0) {
        int digit = number % 10;
        digit_sum += digit;
        digit_product *= digit;
        number /= 10;
    }

    cout << digit_sum << " " << digit_product;
    return 0;
}
