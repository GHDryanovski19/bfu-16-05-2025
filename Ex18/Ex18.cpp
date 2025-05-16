#include <iostream>
using namespace std;

int main()
{
    int number, digit_product = 1;
    cin >> number;

    while (number != 0) {
        digit_product *= number % 10;
        number /= 10;
    }

    if (digit_product >= 100) {
        cout << "YES " << digit_product;
    }
    else {
        cout << "NO";
    }

    return 0;
}
