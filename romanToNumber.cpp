#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    string roman = "MCMXCIV";
    int n = roman.length();
    int number = 0;

    map<char, int> val;
    val['I'] = 1;
    val['V'] = 5;
    val['X'] = 10;
    val['L'] = 50;
    val['C'] = 100;
    val['D'] = 500;
    val['M'] = 1000;

    int i = 0;
    while (i < n - 1)
    {
        if (val[roman[i]] < val[roman[i + 1]])
        {
            number += val[roman[i + 1]] - val[roman[i]];
            i += 2;
        }
        else
        {
            number += val[roman[i]];
            ++i;
        }
    }
    if (i == n - 1)
    {
        number += val[roman[i]];
    }

    cout << "Equivalance integer number is: " << number << endl;
    return 0;
}
