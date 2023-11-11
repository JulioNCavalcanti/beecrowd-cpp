#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // axes
    double x1 = 0;
    double y1 = 0;

    double x2 = 0;
    double y2 = 0;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout.precision(4);
    cout << fixed;
    cout << distance << endl;

    return 0;
}