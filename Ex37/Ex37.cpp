#include <iostream>
using namespace std;

int main()
{
    int pos_count = 0, neg_count = 0;
    int pos_sum = 0, neg_sum = 0;
    int value;

    for (int i = 0; i < 9; ++i) {
        cin >> value;

        if (value > 0) {
            pos_sum += value;
            ++pos_count;
        }
        else {
            neg_sum += value;
            ++neg_count;
        }
    }

    if (pos_count > neg_count) {
        cout << pos_sum;
    }
    else {
        cout << neg_sum;
    }

    return 0;
}
