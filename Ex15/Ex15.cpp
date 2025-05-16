#include <iostream>
using namespace std;

int main()
{
    int original_number, reversed_number = 0;
    cin >> original_number;

    int temp = original_number;
    while (temp != 0) {
        reversed_number = reversed_number * 10 + (temp % 10);
        temp /= 10;
    }

    if (reversed_number == original_number) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
