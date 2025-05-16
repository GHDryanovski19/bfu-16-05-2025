#include <iostream>
using namespace std;

int count_digits(int number) {
    int length = 0;
    while (number != 0) {
        ++length;
        number /= 10;
    }
    return length;
}

int main()
{
    int values[7], total_digits = 0, even_sum = 0;

    for (int i = 0; i < 7; ++i) {
        cin >> values[i];
        total_digits += count_digits(values[i]);

        if (values[i] % 2 == 0) {
            even_sum += values[i];
        }
    }

    cout << total_digits << " " << even_sum;
    return 0;
}
