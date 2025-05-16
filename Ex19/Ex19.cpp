#include <iostream>
using namespace std;

int main()
{
    double coeff_a, coeff_b;
    cin >> coeff_a >> coeff_b;

    if (coeff_a == 0) {
        if (coeff_b == 0) {
            cout << "any x is a solution";
        }
        else {
            cout << "no solution";
        }
    }
    else {
        cout << coeff_b / coeff_a;
    }

    return 0;
}
