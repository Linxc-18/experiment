#include <iostream>

using namespace std;

int getsum(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int a, b =0;
    cin >> a >> b;
    int c = getsum(a, b);
    cout << c;
    return 0;
}