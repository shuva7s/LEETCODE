#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> words = {"hi", "hello", "how"};
    if (words.empty())
    {
        cout << "No words provided." << endl;
        return 0;
    }

    string common = "";
    int common_counter = 0;
    int n = words.size();
    bool done = false;

    while (!done)
    {
        char current_char = '\0';
        for (int i = 0; i < n; ++i)
        {
            if (common_counter >= words[i].size())
            {
                done = true;
                break;
            }
            if (i == 0)
            {
                current_char = words[i][common_counter];
            }
            else if (words[i][common_counter] != current_char)
            {
                done = true;
                break;
            }
        }
        if (!done)
        {
            common += current_char;
            ++common_counter;
        }
    }

    cout << "Common prefix is: " << common << endl;
    return 0;
}
