#include <iostream>
#include <map>

using namespace std;

map<int, int> memoizedValues;

int fibonacci(int n)
{
  cout << "I am the beginning of fibonacci with argument " << n << endl;

  if (n <= 1)
    return n;

  if (memoizedValues.find(n) == memoizedValues.end())
  {
    int solution = fibonacci(n - 1) + fibonacci(n - 2);
    memoizedValues[n] = solution;
    return solution;
  }
  else
  {
    return memoizedValues[n];
  }
}

int main()
{
  cout << "Printing fibonacci" << endl;
  fibonacci(7);

  cout << endl;

  cout << "Printing memoizedValues" << endl;
  map<int, int>::iterator it;
  for (it = memoizedValues.begin(); it != memoizedValues.end(); ++it)
  {
    cout << it->first << " => " << it->second << '\n';
  }
}
