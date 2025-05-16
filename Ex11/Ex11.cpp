#include <iostream>
using namespace std;

int main()
{
    int hour, minute, add_minute;
    cin >> hour >> minute >> add_minute;

    minute += add_minute;
    hour = (hour + (minute / 60)) % 24;
    minute %= 60;

    cout << hour << "h " << minute << "m";

    return 0;
}
