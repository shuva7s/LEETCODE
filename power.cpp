#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n == -1)
        return 1 / x;

    double half = myPow(x, n / 2);
    double result = half * half;
    if (n % 2 != 0)
    {
        if (n > 0)
            result *= x;
        else
            result /= x;
    }
    return result;
}

int main()
{
    double base = 2;
    int power = 10;
    cout << "Result: " << myPow(base, power);
    return 0;
}