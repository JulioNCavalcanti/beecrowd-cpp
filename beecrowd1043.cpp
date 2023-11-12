#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    if ((a > abs(b - c) && a < b + c) || (b > abs(a - c) && b < a + c) || (c > abs(b - a) && c < b + a))
    {
        double perimeter = a + b + c;
        cout.precision(1);
        cout << fixed;
        cout << "Perimetro = " << perimeter << endl;
    }
    else
    {
        double area = ((a + b) * c) / 2.0;
        cout.precision(1);
        cout << fixed;
        cout << "Area = " << area << endl;
    }

    return 0;
}