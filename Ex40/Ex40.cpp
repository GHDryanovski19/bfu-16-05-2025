#include <iostream>
using namespace std;

int main()
{
    int size, target, pair_count = 0;
    cin >> size;

    int* data = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> data[i];
    }

    cin >> target;

    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if (data[i] + data[j] == target) {
                ++pair_count;
            }
        }
    }

    cout << pair_count;

    delete[] data;
    return 0;
}
