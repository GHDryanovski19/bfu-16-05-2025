#include <iostream>
using namespace std;

int main()
{
    double value;
    cin >> value;

    int scaled = static_cast<int>(value * 10000);

    while (scaled % 2 == 0 && scaled != 0) {
        scaled /= 2;
    }

    cout << static_cast<double>(scaled) / 10000;
    return 0;
}
