#include <iostream>

using namespace std;

int main()
{
    double average1 = 0;
    double average2 = 0;

    cin >> average1;
    cin >> average2;

    double final_average = ((average1 * 3.5) + (average2 * 7.5)) / 11.0;

    cout.precision(5);
    cout << fixed;
    cout << "MEDIA = " << final_average << endl;

    return 0;
}