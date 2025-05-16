#include <iostream>
using namespace std;

int main()
{
    int start_kg, start_g, end_kg, end_g, total_diff;

    cin >> start_kg >> start_g >> end_kg >> end_g;

    total_diff = (start_kg * 1000 + start_g) - (end_kg * 1000 + end_g);

    cout << total_diff / 1000 << "kg " << total_diff % 1000 << "g";

    return 0;
}
