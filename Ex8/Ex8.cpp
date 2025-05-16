#include <iostream>
using namespace std;

int main()
{
    double number;
    cin >> number;

    int digit_sum = 0;

    for (int i = 0; i < 4; ++i) {
        number *= 10;
        digit_sum += static_cast<int>(number) % 10;
    }

    cout << digit_sum;
    return 0;
}
