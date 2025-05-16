#include <iostream>
using namespace std;

int main()
{
    int values[7], total = 0;

    for (int i = 0; i < 7; ++i) {
        cin >> values[i];
        total += values[i];
    }

    cout << total;
    return 0;
}
