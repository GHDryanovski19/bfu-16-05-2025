#include <iostream>
using namespace std;

bool is_prime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int values[7], total = 0;

    for (int i = 0; i < 7; ++i) {
        cin >> values[i];
        total += values[i];
    }

    cout << total << endl;

    for (int i = 2; i <= total; ++i) {
        if (total % i == 0 && is_prime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
