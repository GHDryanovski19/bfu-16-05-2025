#include <iostream>
using namespace std;

int digit_sum(int num) {
    int total = 0;
    while (num != 0) {
        total += num % 10;
        num /= 10;
    }
    return total;
}

int main()
{
    int d, m, y;
    cin >> d >> m >> y;

    int d_sum = digit_sum(d);
    int m_sum = digit_sum(m);
    int y_sum = digit_sum(y);

    int total_sum = d_sum + m_sum + y_sum;

    while (total_sum >= 10 && total_sum <= 99) {
        total_sum += d_sum + m_sum + y_sum;
    }

    cout << total_sum;
    return 0;
}
