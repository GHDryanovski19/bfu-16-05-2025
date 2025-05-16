#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int value, sum, smallest = INT_MAX, largest = INT_MIN;

    cin >> value;
    sum = value;
    smallest = value;
    largest = value;

    while (sum != 0) {
        cin >> value;
        sum += value;

        if (value < smallest) {
            smallest = value;
        }
        if (value > largest) {
            largest = value;
        }
    }

    cout << smallest << " " << largest;
    return 0;
}
