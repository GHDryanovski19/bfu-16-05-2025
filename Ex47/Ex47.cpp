#include <iostream>
using namespace std;

int main()
{
    double values[11];

    for (int i = 0; i < 11; ++i) {
        cin >> values[i];
    }

    for (int i = 0; i < 11; ++i) {
        if (values[i] > -2.99 && values[i] < 2.99) {
            cout << values[i] << " ";
        }
    }

    return 0;
}
