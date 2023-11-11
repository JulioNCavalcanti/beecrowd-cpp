#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers;

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    cin >> number1;
    cin >> number2;
    cin >> number3;

    numbers.push_back(number1);
    numbers.push_back(number2);
    numbers.push_back(number3);

    numbers.sort();

    for (const int &number : numbers)
    {
        cout << number << endl;
    }

    cout << endl;

    cout << number1 << endl;
    cout << number2 << endl;
    cout << number3 << endl;

    return 0;
}