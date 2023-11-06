#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius = 0;
    cin >> radius;

    double area = 3.14159 * pow(radius, 2);

    cout.precision(4);
    cout << fixed;
    cout << "A=" << area << endl;

    return 0;
}