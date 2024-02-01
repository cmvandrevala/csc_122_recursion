#include <iostream>
using namespace std;

int nestedRecursion(int n)
{
  cout << "I am at the beginning of nestedRecursion with argument " << n << endl;

  if (n > 100)
    return n - 10;

  return nestedRecursion(nestedRecursion(n + 11));
}

// Driver code
int main()
{
  cout << nestedRecursion(95) << endl;
  return 0;
}
