#include <iostream>

using namespace std;

void f(int i)
{
  if (i == 10) 
    return;

  cout << &i << endl;
  f(i+1);
}

int main()
{
  f(0);
  return 0;
}
