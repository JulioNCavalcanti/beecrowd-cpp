#include <iostream>

using namespace std;

int main()
{
    int employee_number = 0;
    int hours_worked_in_a_month = 0;
    double hourly_rate = 0.0;

    cin >> employee_number;
    cin >> hours_worked_in_a_month;
    cin >> hourly_rate;

    double salary = hourly_rate * hours_worked_in_a_month;

    cout << "NUMBER = " << employee_number << endl;

    cout.precision(2);
    cout << fixed;
    cout << "SALARY = U$ " << salary << endl;

    return 0;
}