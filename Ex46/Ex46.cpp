#include <iostream>
using namespace std;

bool exists_in_array(int value, int array[], int length) {
    for (int i = 0; i < length; ++i) {
        if (array[i] == value) {
            return true;
        }
    }
    return false;
}

int main()
{
    int input[7], found_duplicates[3], dup_count = 0;

    for (int i = 0; i < 7; ++i) {
        cin >> input[i];
    }

    for (int i = 0; i < 7; ++i) {
        for (int j = i + 1; j < 7; ++j) {
            if (input[i] == input[j] && !exists_in_array(input[i], found_duplicates, dup_count)) {
                found_duplicates[dup_count++] = input[i];
                break;
            }
        }
    }

    for (int i = 0; i < dup_count; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (input[j] == found_duplicates[i]) {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
