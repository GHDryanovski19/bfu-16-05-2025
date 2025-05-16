#include <iostream>
using namespace std;

int main()
{
    int first[5], second[5];
    int total_product = 1;

    for (int i = 0; i < 5; ++i) {
        cin >> first[i];
    }

    for (int i = 0; i < 5; ++i) {
        cin >> second[i];
    }

    for (int i = 0; i < 5; ++i) {
        total_product *= (first[i] > second[i]) ? first[i] : second[i];
    }

    cout << total_product;
    return 0;
}
