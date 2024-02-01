#include <iostream>

using namespace std;

void tailRecursion(int n)
{
  cout << "I am the beginning of tailRecursion with argument " << n << endl;

  if (n == 0)
    return;

  cout << "I am just before the end of tailRecursion with argument " << n << endl;

  tailRecursion(n - 1);
}

int main()
{
  tailRecursion(7);
}
