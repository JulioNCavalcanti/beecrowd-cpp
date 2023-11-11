#include <iostream>

using namespace std;

int main()
{
    int quantity_even_numbers = 0;

    for (int i = 0; i < 5; i++)
    {
        int number = 0;
        cin >> number;

        if (number % 2 == 0)
        {
            quantity_even_numbers++;
        }
    }

    cout << quantity_even_numbers << " valores pares" << endl;

    return 0;
}