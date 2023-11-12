#include <iostream>
#include <string>

using namespace std;

int main()
{

    string word = " ";
    cin >> word;

    if (word.size() < 10)
    {
        cout << "palavrinha" << endl;
    }
    else
    {
        cout << "palavrao" << endl;
    }

    return 0;
}