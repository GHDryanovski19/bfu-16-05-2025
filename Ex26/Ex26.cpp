#include <iostream>
using namespace std;

int main()
{
    int count, value, divisible_by_7 = 0;
    cin >> count;

    for (int i = 0; i < count; ++i) {
        cin >> value;
        if (value % 7 == 0) {
            ++divisible_by_7;
        }
    }

    cout << divisible_by_7;
    return 0;
}
