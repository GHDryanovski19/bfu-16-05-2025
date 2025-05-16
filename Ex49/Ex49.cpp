#include <iostream>
using namespace std;

int main()
{
    int first[9], second[9];

    for (int i = 0; i < 9; ++i) {
        cin >> first[i];
    }

    for (int i = 0; i < 9; ++i) {
        cin >> second[i];
    }

    for (int i = 0; i < 9; ++i) {
        cout << (first[i] > second[i] ? first[i] : second[i]) << " ";
    }

    return 0;
}
