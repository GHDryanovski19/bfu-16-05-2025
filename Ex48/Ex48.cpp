#include <iostream>
using namespace std;

int main()
{
    int data[101], length = 0, input;

    while (true) {
        cin >> input;
        if (input == 0) {
            break;
        }
        data[length++] = input;
    }

    for (int i = length - 1; i >= 0; --i) {
        cout << length - i << ":" << data[i] << " ";
    }

    return 0;
}
