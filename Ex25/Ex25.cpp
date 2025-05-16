#include <iostream>
using namespace std;

int main()
{
    int limit, sum = 0;
    cin >> limit;

    for (int i = 1; i <= limit; i += 2) {
        sum += i;
    }

    cout << sum;
    return 0;
}
