#include <iostream>

using namespace std;

int main()
{
    int total_distance_km = 0;
    double total_spent_fuel_liters = 0;

    cin >> total_distance_km;
    cin >> total_spent_fuel_liters;

    double average_consumption = total_distance_km / (double)total_spent_fuel_liters;

    cout.precision(3);
    cout << fixed;
    cout << average_consumption << " km/l" << endl;

    return 0;
}