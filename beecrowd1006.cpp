#include <iostream>

using namespace std;

int main()
{
    double average1 = 0;
    double average2 = 0;
    double average3 = 0;

    cin >> average1;
    cin >> average2;
    cin >> average3;

    double final_average = ((average1 * 2) + (average2 * 3) + (average3 * 5)) / 10.0;

    cout.precision(1);
    cout << fixed;
    cout << "MEDIA = " << final_average << endl;

    return 0;
}