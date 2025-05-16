#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    for (int divisor = input / 2; divisor >= 2; --divisor) {
        if (input % divisor == 0) {
            cout << divisor << " ";
        }
    }

    cout << endl;
    return 0;
}
