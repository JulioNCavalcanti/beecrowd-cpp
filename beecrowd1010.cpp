#include <iostream>

using namespace std;

int main()
{
    // product one
    int product_code_1 = 0;
    int number_of_units_of_product_1 = 0;
    double price_per_unit_of_product_1 = 0.0;

    // product two
    int product_code_2 = 0;
    int number_of_units_of_product_2 = 0;
    double price_per_unit_of_product_2 = 0.0;

    // product data one
    cin >> product_code_1;
    cin >> number_of_units_of_product_1;
    cin >> price_per_unit_of_product_1;

    // product data two
    cin >> product_code_2;
    cin >> number_of_units_of_product_2;
    cin >> price_per_unit_of_product_2;

    double value_to_pay = (number_of_units_of_product_1 * price_per_unit_of_product_1) + (number_of_units_of_product_2 * price_per_unit_of_product_2);

    cout.precision(2);
    cout << fixed;
    cout << "VALOR A PAGAR: R$ " << value_to_pay << endl;

    return 0;
}