#include <iostream>
using namespace std;

int main()
{
    int target_sum;
    cin >> target_sum;

    for (int i = 100; i <= 999; ++i) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (hundreds + tens + units == target_sum) {
            cout << i << " ";
        }
    }

    return 0;
}
