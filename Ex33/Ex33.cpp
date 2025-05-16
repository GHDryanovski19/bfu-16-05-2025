#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, number, perfect_square_count = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> number;
        int root = static_cast<int>(sqrt(number));
        if (root * root == number) {
            ++perfect_square_count;
        }
    }

    cout << perfect_square_count;
    return 0;
}
