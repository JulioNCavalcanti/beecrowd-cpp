#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a;
    cin >> b;
    cin >> c;

    int greater_a_b = (a + b + abs(a - b)) / 2;
    int grater_a_b_c = (greater_a_b + c + abs(greater_a_b - c)) / 2;

    cout << grater_a_b_c << " eh o maior" << endl;

    return 0;
}