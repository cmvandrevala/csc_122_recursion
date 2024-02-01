#include <iostream>

using namespace std;

void headRecursion(int n)
{
  cout << "I am the beginning of headRecursion with argument " << n << endl;

  if (n == 0)
    return;

  headRecursion(n - 1);

  cout << "I am at the end of headRecursion with argument " << n << endl;
}

int main()
{
  headRecursion(7);
}
