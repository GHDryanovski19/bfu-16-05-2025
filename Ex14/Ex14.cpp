#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int number;
    int smallest_odd = INT_MAX;
    int largest_even = INT_MIN;
    bool has_even = false, has_odd = false;

    for (int i = 0; i < 5; ++i) {
        cin >> number;

        if (number % 2 == 0) {
            has_even = true;
            if (number > largest_even)
                largest_even = number;
        }
        else {
            has_odd = true;
            if (number < smallest_odd)
                smallest_odd = number;
        }
    }

    if (has_even && has_odd) {
        cout << largest_even - smallest_odd;
    }
    else {
        cout << "Insufficient data";
    }

    return 0;
}
