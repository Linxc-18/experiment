#include <iostream>
#include <cmath>

using namespace std;

double myCos(int x)
{
  const double PI = 3.14159;
  double a = x * PI / 180;
	double term = 1.0;
  double sum = 1.0;
  int n = 0;
  while (fabs(term) > 1e-8)
  {
    n += 2;
    term = term *(a * -a)/(n * (n-1));
    sum += term;
  }
  return sum;
}

int main()
{
  int x = 0;
  cin >> x;
  double y = myCos(x);
  cout << y;
  
  return 0;
}