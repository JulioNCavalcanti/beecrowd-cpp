#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    cin >> x;
    cin >> y;

    int sum = 0;

    if (x > y)
    {
        y += x;
        x = y - x;
        y -= x;
    }

    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}