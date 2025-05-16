#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int count, value;
    int total = 0, smallest = INT_MAX, largest = INT_MIN;

    cin >> count;

    for (int i = 0; i < count; ++i) {
        cin >> value;

        if (value < smallest) {
            smallest = value;
        }
        if (value > largest) {
            largest = value;
        }

        total += value;
    }

    int adjusted_average = (total - largest - smallest) / (count - 2);
    cout << adjusted_average;

    return 0;
}
