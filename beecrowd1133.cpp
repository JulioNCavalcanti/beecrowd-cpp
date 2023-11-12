#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    cin >> x;
    cin >> y;

    if (x > y)
    {
        y += x;
        x = y - x;
        y -= x;
    }

    for (int i = x; i < y; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            cout << i << endl;
        }
    }

    return 0;
}