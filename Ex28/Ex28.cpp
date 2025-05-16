#include <iostream>
using namespace std;

int main()
{
    int n, number, total = 0, total_product = 1;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> number;
        total += number;
        total_product *= number;
    }

    cout << total << " " << total_product;
    return 0;
}
