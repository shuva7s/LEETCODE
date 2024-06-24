#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {2, 3, 4, 5, 18, 17, 6};
    int n = 7;
    int maxWater = 0;

    for (int i = 0, j = n - 1; i < n && j >= 0;)
    {
        maxWater = max(maxWater, min(arr[i], arr[j]) * abs(j - i));
        if (arr[i] > arr[j])
            --j;
        else
            ++i;
    }

    cout << "maximum possible water is: " << maxWater << endl;
    return 0;
}