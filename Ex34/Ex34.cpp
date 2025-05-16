#include <iostream>
using namespace std;

int main()
{
    int values[10], triple_digit_count = 0;

    for (int i = 0; i < 10; ++i) {
        cin >> values[i];
    }

    for (int i = 0; i < 10; ++i) {
        if (values[i] >= 100 && values[i] <= 999) {
            ++triple_digit_count;
        }
    }

    cout << triple_digit_count;
    return 0;
}
