#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double values[7], total_abs_sum = 0;

    for (int i = 0; i < 7; ++i) {
        cin >> values[i];
        total_abs_sum += abs(values[i]);
    }

    cout << total_abs_sum;
    return 0;
}
