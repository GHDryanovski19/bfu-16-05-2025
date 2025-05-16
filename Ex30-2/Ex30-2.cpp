#include <iostream>
using namespace std;

int main()
{
    int total, current;
    cin >> total;

    while (total > 0) {
        cin >> current;
        total -= current;
    }

    cout << total + current << " " << current;
    return 0;
}
