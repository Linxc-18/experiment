#include <iostream>

using namespace std;

bool isFriend(int a, int b)
{
    int i = 0, sum = 0;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
            sum += i;
    }
    int sum_1 = 0;
    for (i = 1; i < b; i++)
    {
        if (b % i == 0)
            sum_1 += i;
    }
    if (sum == b && sum_1 == a)
        return true;
    else
        return false;
}

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    if (isFriend(a, b))
        cout << "友好数";
    else
        cout << "非友好数";
    return 0;
}