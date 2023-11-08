#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;

    cin >> number1;
    cin >> number2;
    cin >> number3;
    cin >> number4;

    int difference = (number1 * number2) - (number3 * number4);

    cout << "DIFERENCA = " << difference << endl;

    return 0;
}