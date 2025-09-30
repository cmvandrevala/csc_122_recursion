#include <iostream>

using namespace std;

int collatz(int n);

int collatzEven(int n);

int collatzOdd(int n);

int main()
{
  int startingPoint = 200;
  cout << startingPoint << endl;
  collatz(startingPoint);
  return 0;
}

int collatz(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else if (n % 2 == 0)
  {
    return collatzEven(n);
  }
  else
  {
    return collatzOdd(n);
  }
}

int collatzEven(int n)
{
  int step = n / 2;
  cout << step << endl;
  return collatz(step);
}

int collatzOdd(int n)
{
  int step = 3 * n + 1;
  cout << step << endl;
  return collatz(step);
}
