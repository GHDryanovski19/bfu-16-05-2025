#include <iostream>
using namespace std;

int main()
{
    double value;
    int operation;
    const double PI = 3.14;

    cin >> value >> operation;

    switch (operation)
    {
    case 1:
        cout << value * 3;
        break;
    case 2:
        cout << value * value;
        break;
    case 3:
        cout << value * value * PI;
        break;
    default:
        cout << "invalid operation";
        break;
    }

    return 0;
}
