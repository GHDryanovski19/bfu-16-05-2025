#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int* data = new int[size];
    int smallest = INT_MAX, min_index = 0, result_product = 1;

    for (int i = 0; i < size; ++i) {
        cin >> data[i];
        if (data[i] < smallest) {
            smallest = data[i];
            min_index = i;
        }
    }

    for (int i = 0; i < min_index; ++i) {
        result_product *= data[i];
    }

    cout << result_product;

    delete[] data;
    return 0;
}
