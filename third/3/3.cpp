#include <iostream>
#include <iomanip>

using namespace std;

bool isPalindromes(int n)
{
    int count = n, orig = n;
    int rev = 0;
    for (; count > 0; count/=10)
    {
        int m = count % 10;
        rev = rev * 10 + m;
    }
    return rev == orig;
}

int main()
{
    int n = 0, i = 0;
    cin >> n;
    for (int count = 11; count < n; count++)
    {
        if (isPalindromes(count))
        {
            cout << left << setw(5) << count;
            i++;
            if (i % 10 == 0)
                cout << endl;
        }
        
    }

    return 0;
}