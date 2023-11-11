#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> outputs_data;

    int number_of_entries = 0;
    cin >> number_of_entries;

    for (int i = 0; i < number_of_entries; i++)
    {
        int x = 0;
        cin >> x;

        string data;

        if (x == 0)
        {
            outputs_data.push_back("NULL");
            continue;
        }

        if (x % 2 == 0)
        {
            data += "EVEN ";
        }
        else
        {
            data += "ODD ";
        }

        if (x > 0)
        {
            data += "POSITIVE";
        }
        else
        {
            data += "NEGATIVE";
        }

        outputs_data.push_back(data);
    }

    for (const string &output : outputs_data)
    {
        cout << output << endl;
    }

    return 0;
}