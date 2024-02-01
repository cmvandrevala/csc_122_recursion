#include <iostream>

using namespace std;

int factorial(int n)
{
  cout << "I am the beginning of factorial with argument " << n << endl;

  if (n == 0)
    return 1;

  return n * factorial(n - 1);
}

int main()
{
  cout << factorial(7) << endl;
}
