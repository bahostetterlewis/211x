#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

void print(ostream &os, string s)
{
  os << s << endl;
}

void selectprint(string s)
{
  ofstream of;
  of.open("output.txt");
  print(cout, s);
}

int main()
{

  selectprint("my string");
  selectprint("other string");
  selectprint("another string");

  return 0;
}
