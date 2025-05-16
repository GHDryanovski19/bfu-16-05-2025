#include <iostream>
using namespace std;

int main()
{
    int number, digit_count = 0;
    double digit_sum = 0;

    cin >> number;

    while (number != 0) {
        digit_sum += number % 10;
        ++digit_count;
        number /= 10;
    }

    cout << digit_sum / digit_count;
    return 0;
}
