#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* values = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    int current_count = 1;
    int max_count = 0;
    int start_index = 0;

    for (int i = 1; i < n; ++i) {
        if (values[i] == values[i - 1]) {
            ++current_count;
        }
        else {
            if (current_count > max_count) {
                max_count = current_count;
                start_index = i - current_count;
            }
            current_count = 1;
        }
    }

    if (current_count > max_count) {
        max_count = current_count;
        start_index = n - current_count;
    }

    cout << start_index << " " << max_count;

    delete[] values;
    return 0;
}
