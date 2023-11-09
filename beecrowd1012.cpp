#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    cin >> a;
    cin >> b;
    cin >> c;

    double area_rectangled_triangle = (a * c) / 2.0;
    double area_circle = 3.14159 * pow(c, 2);
    double area_trapezium = ((a + b) * c) / 2;
    double area_square = b * b;
    double area_rectangle = a * b;

    cout.precision(3);
    cout << fixed;
    cout << "TRIANGULO: " << area_rectangled_triangle << endl;
    cout << "CIRCULO: " << area_circle << endl;
    cout << "TRAPEZIO: " << area_trapezium << endl;
    cout << "QUADRADO: " << area_square << endl;
    cout << "RETANGULO: " << area_rectangle << endl;

    return 0;
}