#include <iostream>
#include <string>

using namespace std;

int main()
{
    string seller_name = " ";
    double fixed_salary = 0.0;
    double total_sales_for_the_month = 0.0;
    double total_salary = 0.0;

    cin >> seller_name;
    cin >> fixed_salary;
    cin >> total_sales_for_the_month;

    total_salary = fixed_salary + (total_sales_for_the_month * 0.15);

    cout.precision(2);
    cout << fixed;
    cout << "TOTAL = R$ " << total_salary << endl;

    return 0;
}