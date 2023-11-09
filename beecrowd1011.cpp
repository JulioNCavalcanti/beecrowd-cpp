#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius = 0.0;
    cin >> radius;

    double volume = (4 / 3.0) * 3.14159 * pow(radius, 3);

    cout.precision(3);
    cout << fixed;
    cout << "VOLUME = " << volume << endl;

    return 0;
}