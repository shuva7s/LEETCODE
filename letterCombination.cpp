#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

// Function to generate combinations recursively
void combine(const vector<string> &input, vector<string> &output, int index, const string &current)
{
    if (index == input.size())
    {
        output.push_back(current);
        return;
    }
    for (int i = 0; i < input[index].length(); ++i)
    {
        combine(input, output, index + 1, current + input[index][i]);
    }
}

int main()
{
    // Assuming represents map is already filled with some values
    map<char, string> represents = {
        {'1', ""},
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

    string digits = "234"; // This can be any number of digits
    vector<string> input;

    // Fill the input vector with the corresponding strings from represents map
    for (int j = 0; j < digits.length(); ++j)
    {
        input.push_back(represents[digits[j]]);
    }

    vector<string> result;
    combine(input, result, 0, "");

    // Output the result for verification
    for (const auto &str : result)
    {
        cout << str << " ";
    }

    return 0;
}
