#include<iostream>

using namespace std;

void sort(double& num1, double& num2, double& num3)
{
    if (num1 > num2)
    {
        double a = num1;
        num1 = num2;
        num2 = a;
    }
    if (num2 > num3)
    {
        double a = num2;
        num2 = num3;
        num3 = a;
    }
    if (num1 > num2)
    {
        double a = num1;
        num1 = num2;
        num2 = a;
    }
}

int main()
{
    double num1 = 0, num2 = 0, num3 = 0;
    cin >> num1 >> num2 >> num3;
    sort(num1, num2, num3);
    cout << num1 << " " << num2 << " " << num3;

    return 0;
}