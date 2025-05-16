#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, max_value = INT_MIN, max_count = 0;
    cin >> n;

    int* data = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        if (data[i] > max_value) {
            max_value = data[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (data[i] == max_value) {
            ++max_count;
        }
    }

    cout << max_count;

    delete[] data;
    return 0;
}
