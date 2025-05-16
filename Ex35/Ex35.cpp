#include <iostream>
using namespace std;

int main()
{
    int result = 0;

    for (int i = 1; i <= 5; ++i) {
        result = result * 10 + i;
    }

    cout << result * 2;
    return 0;
}
