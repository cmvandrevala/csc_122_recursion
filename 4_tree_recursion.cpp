#include <iostream>

using namespace std;

int fibonacci(int n)
{
  cout << "I am the beginning of fibonacci with argument " << n << endl;

  if (n <= 1)
    return n;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  fibonacci(7);
}
