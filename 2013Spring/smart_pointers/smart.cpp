#include <memory>
#include <iostream>

using namespace std;

//simple class that allerts when a ctor and dtor are called
//simple print function to show accessing methods
class test
{
  public:
  test()
  {
    cout << "ctor" << endl;
  }

  ~test()
  {
    cout << "dtor" << endl;
  }
  void print()
  {
    cout << "print" << endl;
  }

};

int main()
{
  auto_ptr<test> a(new test());
  a->print();
  return 0;
}
