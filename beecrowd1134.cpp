#include <iostream>

using namespace std;

int main()
{
    int counter_alcohol = 0;
    int counter_gasoline = 0;
    int counter_diesel = 0;

    while (true)
    {
        int input = 0;
        cin >> input;

        if (input != 4)
        {
            switch (input)
            {
            case 1:
                counter_alcohol++;
                break;
            case 2:
                counter_gasoline++;
                break;
            case 3:
                counter_diesel++;
                break;

            default:
                break;
            }
        }
        else
        {
            break;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << counter_alcohol << endl;
    cout << "Gasolina: " << counter_gasoline << endl;
    cout << "Diesel: " << counter_diesel << endl;

    return 0;
}