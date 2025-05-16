#include <iostream>
using namespace std;

bool has_digit_five(int number) {
    while (number != 0) {
        if (number % 10 == 5) {
            return true;
        }
        number /= 10;
    }
    return false;
}

int main()
{
    int start, end, count = 0;
    cin >> start >> end;

    for (int i = start; i <= end; ++i) {
        if (has_digit_five(i)) {
            ++count;
        }
    }

    cout << count;
    return 0;
}
