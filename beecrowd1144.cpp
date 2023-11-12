#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << (long)pow(i, 2) << " " << (long)pow(i, 3) << endl;
        cout << i << " " << (long)pow(i, 2) + 1 << " " << (long)(pow(i, 3) + 1) << endl;
    }

    return 0;
}